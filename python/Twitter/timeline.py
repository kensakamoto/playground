import os
import sys
import re

from requests_oauthlib import OAuth1Session
import json

import MeCab
from collections import Counter 

CONSUMER_KEY = os.environ['CONSUMER_KEY']
CONSUMER_SECRET = os.environ['CONSUMER_SECRET']
ACCESS_TOKEN = os.environ['ACCESS_TOKEN']
ACCESS_TOKEN_SECRET = os.environ['ACCESS_TOKEN_SECRET']

twitter = OAuth1Session(CONSUMER_KEY, CONSUMER_SECRET, ACCESS_TOKEN, ACCESS_TOKEN_SECRET)

counter = 0
para = {}
recentid = 0

target = "badassceo"




def auto_timeline():
	global counter
	global recentid
	global target

	f = open('word/{0}.txt'.format(target), 'a')

	if recentid == 0:
		params = {"screen_name": target, "count": 100, "include_rts": False}
	else:
		params = {"screen_name": target, "count": 100, "max_id": recentid - 1, "include_rts": False}

	req = twitter.get("https://api.twitter.com/1.1/statuses/user_timeline.json", params = params)

	timeline = json.loads(req.text)

	for tweet in timeline:
	  	# para = {"id": (tweet["id"])}
	  	# print(para)
	  	counter += 1
	  	recentid = tweet["id"]
	  	# print(tweet["text"])
	  	f.write(tweet["text"])
	  	# ## 下が自動でいいねを送る関数
	  	# favreq = twitter.post("https://api.twitter.com/1.1/favorites/create.json", params = para)
	  	### これがいいねを解除するメソッド
	  	# favdes = twitter.post("https://api.twitter.com/1.1/favorites/destroy.json", params = para)
	  	### リツート用
	  	# retreq = twitter.post("https://api.twitter.com/1.1/statuses/retweet/:id.json", params = para)
	print(counter)

def get_tokens(tagger, content):
	"""
	文書内に出現した名詞のリストを取得する関数
	"""

	content = re.sub(r'[0-9a-zA-Z]+', '', content)
	tokens = []
	# print(content)

	node = tagger.parseToNode(content)
	while node:
		category, sub_category = node.feature.split(',')[:2]
		if category == '名詞' and sub_category in ('固有名詞', '一般'):
			tokens.append(node.surface)
		node = node.next

	return tokens

def make_text(target):
	try:
		os.makedirs('word/')
	except:
		pass
	f = open('word/{0}.txt'.format(target), 'w')
	f.close()
	for i in range(2):
		auto_timeline()


def make_wordrank(target):
	tagger = MeCab.Tagger('-d /usr/local/lib/mecab/dic/mecab-ipadic-neologd')
	tagger.parse('')

	frequency = Counter()

	with open('word/{0}.txt'.format(target), 'r') as file:
		for content in file:
			tokens = get_tokens(tagger, content)
			frequency.update(tokens)
			# print(content)

	for token, count in frequency.most_common(40):
		print(token, count)

def main():
	make_text(target)

	make_wordrank(target)



if __name__ == '__main__':
	sys = sys.argv
	print(sys)
	main()

