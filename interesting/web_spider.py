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
url='http://www.cntour.cn/'
strhtml=requests.get(url)
soup=BeautifulSoup(strhtml.text,'lxml')
data = soup.select('#m_news_info2099 > div.news_title > a > span')
print(data)
# for item in data:
#     result={
#         'title':item.get_text(),
#         'link':item.get('href')
#     }
# print(result)