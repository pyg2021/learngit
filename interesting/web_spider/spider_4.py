# 多级页面爬取-*- coding: utf-8 -*-
from urllib import request
import re
import time
import random
import pymysql
from hashlib import md5
from ua_info import ua_list
import sys


class MovieSkySpider(object):
    def __init__(self):
        self.url = 'https://www.dytt8.net/html/gndy/dyzz/list_23_{}.html'
        self.db = pymysql.connect(
            host='localhost', user='root', password='pyh168861', database='movieskydb',charset='utf8'
        )
        self.cursor = self.db.cursor()

    # 1.请求函数
    def get_html(self, url):
        headers = {'User-Agent': random.choice(ua_list)}
        req = request.Request(url=url, headers=headers)
        res = request.urlopen(req)
        # 本网站使用gb2312的编码格式
        html = res.read().decode('gb2312', 'ignore')

        return html

    # 2.正则解析函数
    def re_func(self, re_bds, html):
        pattern = re.compile(re_bds, re.S)
        r_list = pattern.findall(html)

        return r_list

    # 3.提取数据函数
    def parse_html(self, one_url):
        # 调用请求函数，获取一级页面
        one_html = self.get_html(one_url)
        re_bds = '<table width="100%".*?<td width="5%".*?<a href="(.*?)".*?ulink">.*?</table>'
        # 获取二级页面链接
        # link_list: ['/html//html/gndy/dyzz/20210226/61131.html','/html/xxx','','']
        link_list = self.re_func(re_bds, one_html)
        for link in link_list:
            # 判断是否需要爬取此链接
            # 1.获取指纹
            # 拼接二级页面url
            two_url = 'https://www.dytt8.net' + link
            s = md5()
            # 加密url，需要是字节串
            s.update(two_url.encode())
            # 生成指纹，获取十六进制加密字符串，
            finger = s.hexdigest()
            # 2.通过函数判断指纹在数据库中是否存在
            if self.is_hold_on(finger):
                # 抓取二级页面数据
                self.save_html(two_url)
                time.sleep(random.randint(1, 2))
                # 抓取后，把想用的url专属指纹存入数据库
                ins = 'insert into request_finger values (%s)'
                self.cursor.execute(ins, [finger])
                self.db.commit()
            else:
                sys.exit('更新完成')

    # 4.判断链接是否已经抓取过
    def is_hold_on(self, finger):
        # 查询数据库
        sql = 'select finger from request_finger where finger=%s'
        # execute()函数返回值为受影响的行数（即0或者非0）
        r = self.cursor.execute(sql, [finger])
        # 如果为0表示没有抓取过
        if not r:
            return True

    # 5.解析二级页面，获取数据（名称与下载链接）
    def save_html(self, two_url):
        two_html = self.get_html(two_url)
        re_bds = '<div class="title_all"><h1><font color=#07519a>(.*?)</font></h1> \
        </div>.*?<a.*?href="(.*?)".*?>.*?style="BACKGROUND-COLOR:.*?</a>'
        # film_list: [('name','downloadlink'),(),(),()]
        film_list = self.re_func(re_bds, two_html)
        print(film_list)
        # 插入数据库
        sql = 'insert into movieinfo values(%s,%s)'
        # L = list(film_list[0])
        self.cursor.executemany(sql, film_list)
        self.db.commit()

    # 主函数
    def run(self):
        # 二级页面后四页的正则表达式略有不同，需要重新分析
        for i in range(1, 4):
            url = self.url.format(i)
            self.parse_html(url)


if __name__ == '__main__':
    spider = MovieSkySpider()
    spider.run()