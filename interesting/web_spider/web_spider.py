import requests
import json
from bs4 import BeautifulSoup
# url = 'http://www.cntour.cn/'
# strhtml = requests.get(url)        #Get方式获取网页数据
# print(strhtml.text)


#有道翻译
# def get_translate_date(word=None):
#     url = 'http://fanyi.youdao.com/translate_o?smartresult=dict&smartresult=rule'
#     From_data={'i':word,'from':'zh-CHS','to':'en','smartresult':'dict','client':'fanyideskweb','salt':'15477056211258','sign':'b3589f32c38bc9e3876a570b8a992604','ts':'1547705621125','bv':'b33a2f3f9d09bde064c9275bcb33d94e','doctype':'json','version':'2.1','keyfrom':'fanyi.web','action':'FY_BY_REALTIME','typoResult':'false'}
#     #请求表单数据
#     response = requests.post(url,data=From_data)
#     #将Json格式字符串转字典
#     content = json.loads(response.text)
#     print(content)
#     #打印翻译后的数据
#     # print(content['translateResult'][0][0]['tgt'])
# if __name__=='__main__':
#     get_translate_date('我爱中国')

#
# url='http://www.cntour.cn/'
# strhtml=requests.get(url)
# soup=BeautifulSoup(strhtml.text,'lxml')
# data = soup.select('#m_news_info2099 > div.news_title > a > span')
# print(data)
# for item in data:
#     result={
#         'title':item.get_text(),
#         'link':item.get('href')
#     }
# print(result)

#导包,发起请求使用urllib库的request请求模块
#发起请求使用urllib库的request请求模块
# from urllib import request
# response=request.urlopen('http://www.baidu.com/')
# print(response)
#
# #提取响应内容
# html = response.read().decode('utf-8')
# #打印响应内容
# print(html)

# from urllib import request
# # 定义变量：URL 与 headers
# url = 'http://httpbin.org/get' #向测试网站发送请求
# #重构请求头，伪装成 Mac火狐浏览器访问，可以使用上表中任意浏览器的UA信息
# headers = {
# 'User-Agent':'Mozilla/5.0 (Macintosh; Intel Mac OS X 10.12; rv:65.0) Gecko/20100101 Firefox/65.0'}
# # 1、创建请求对象，包装ua信息
# req = request.Request(url=url,headers=headers)
# # 2、发送请求，获取响应对象
# res = request.urlopen(req)
# # 3、提取响应内容
# html = res.read().decode('utf-8')
# print(html)

# #随机获取ua
# from fake_useragent import UserAgent
# #实例化一个对象
# ua=UserAgent()
# #随机获取一个ie浏览器ua
# print(ua.ie)
# print(ua.ie)
# #随机获取一个火狐浏览器ua
# print(ua.firefox)
# print(ua.firefox)

#导入parse模块
# from urllib import parse
# #构建查询字符串字典
# query_string = {
# 'wd' : '爬虫'
# }
# #调用parse模块的urlencode()进行编码
# result = parse.urlencode(query_string)
# #使用format函数格式化字符串，拼接url地址
# print(result)
# url = 'http://www.baidu.com/s?{}'.format(result)
# print(url)
#导入parse模块
#构建查询字符串字典
from urllib import parse
#注意url的书写格式，和 urlencode存在不同
url = 'http://www.baidu.com/s?wd={}'
word = input('请输入要搜索的内容:')
#quote()只能对字符串进行编码
query_string = parse.quote(word)
print(url.format(query_string))

string=parse.unquote(query_string)
print('解码后的内容',string)