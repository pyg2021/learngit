import requests
from lxml import etree
import execjs
import datetime
import json
import time
import numpy as np


def login(self):
    # 参数

    headers = {
        'User-Agent': 'Mozilla/5.0 (Windows NT 6.1; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/63.0.3239.108 Safari/537.36',
    }
    login = 'https://cas.whu.edu.cn/authserver/login?service=http://gym.whu.edu.cn:80/wechat/autoLoginConnector.jsp'

    # 使用会话保持 cookie
    s = requests.Session()

    # 首次请求，获取隐藏参数
    start_response = s.get(login)
    start_html = etree.HTML(start_response.text, parser=etree.HTMLParser())
    lt = start_html.xpath('//*[@id="casLoginForm"]/input[1]/@value')[0]
    dllt = start_html.xpath('//*[@id="casLoginForm"]/input[2]/@value')[0]
    execution = start_html.xpath('//*[@id="casLoginForm"]/input[3]/@value')[0]
    _eventId = start_html.xpath('//*[@id="casLoginForm"]/input[4]/@value')[0]
    rmShown = start_html.xpath('//*[@id="casLoginForm"]/input[5]/@value')[0]
    pwdDefaultEncryptSalt = start_html.xpath('//*[@id="casLoginForm"]/input[6]/@value')[0]

    # 调用 JavaScript 对密码加密
    with open('encrypt.js', 'r', encoding='utf-8') as f:
        js = f.read()
    ctx = execjs.compile(js)
    password = ctx.call('encryptAES', self.password, pwdDefaultEncryptSalt)

    # 登录
    data = {
        'username': self.username,
        'password': password,
        'lt': lt,
        'dllt': dllt,
        'execution': execution,
        '_eventId': _eventId,
        'rmShown': rmShown
    }
    login_response = s.post(login, headers=headers, data=data, allow_redirects=False)  # 重定向请求必须加上 allow_redirects=False
    response1 = login_response.text
    url = login_response.headers['Location']
    gym_r = s.get(url, allow_redirects=False)
    url2 = gym_r.headers['Location']
    gym_r2 = s.get(url2, allow_redirects=False)
    gym_r3 = s.get('http://gym.whu.edu.cn/wechat/autoLoginConnector.jsp')
    gym_r4 = s.post('http://gym.whu.edu.cn//UserAction!UnifiedLogin')
    gym_r5 = s.get('http://gym.whu.edu.cn/wechat/map/mapHome.jsp')
    tmp = s.post('http://gym.whu.edu.cn/UserAction!getUserInfoToMobile')

    # get user ID
    url3 = 'http://gym.whu.edu.cn/wechat/user/userHome.jsp'
    user_info_r = s.get(url3)
    user_info_text = user_info_r.text
    loc = user_info_text.find('"usrId": ') + 9
    l = 0
    while (user_info_text[loc + l] != ',') & (l < 10):
        l += 1
    user_id = user_info_text[loc:loc + l]
    # user_id = user_info_text[user_info_text.find('"usrId": ')+9:user_info_text.find('"usrId": ')+14]
    logger.logInfo('user ID is %s' % user_id)
    # userInf = s.post('http://gym.whu.edu.cn/UserAction!getUserInfoToMobile').text[1:-1].split(',')
    self.usrId = user_id
    return s
