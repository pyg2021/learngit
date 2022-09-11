import requests
from lxml import etree
import execjs
import datetime
import json
import time
import numpy as np

headers = {
    'User-Agent': 'Mozilla/5.0 (Windows NT 6.1; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/63.0.3239.108 Safari/537.36',
}
login = 'https://cas.whu.edu.cn/authserver/login?service=http://gym.whu.edu.cn:80/wechat/autoLoginConnector.jsp'
# 使用会话保持 cookie
s = requests.Session()
print(1)