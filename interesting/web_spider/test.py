from urllib import request
import random
from ua_info import ua_list
url = 'https://www.maoyan.com/board/4?timeStamp=1658563665442&channelId=40011&index=9&signKey=84bbd1e5f3c81418aed5217329d21c28&sVersion=1&webdriver=false&offset=20'
# 请求函数
headers = {'User-Agent': "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.5060.114 Safari/537.36 Edg/103.0.1264.62"}
req = request.Request(url=url, headers=headers)
res = request.urlopen(req)
html = res.read().decode()
print(html)