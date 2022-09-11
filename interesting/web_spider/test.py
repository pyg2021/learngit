from urllib import request
import re
import time
import random
import pymysql
#pymysql远程连接数据库的操作工具
from hashlib import md5
from ua_info import ua_list
import sys

url='https://www.dytt8.net/html/gndy/dyzz/list_23_1.html'
headers = {'User-Agent': random.choice(ua_list)}
# 随机选择代理的地址
req = request.Request(url=url, headers=headers)
# 在urllib中的request.Request模块能够加入headers等信息，来发起请求
res = request.urlopen(req)
# urlopen()方法可以实现最基本的请求的发起
# 本网站使用gb2312的编码格式
# print(res.read())
html = res.read().decode('gb2312', 'ignore')
print(html)