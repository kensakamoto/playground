import os
from requests_oauthlib import OAuth1Session
import json

CONSUMER_KEY = os.environ['CONSUMER_KEY']
CONSUMER_SECRET = os.environ['CONSUMER_SECRET']
ACCESS_TOKEN = os.environ['ACCESS_TOKEN']
ACCESS_TOKEN_SECRET = os.environ['ACCESS_TOKEN_SECRET']

twitter = OAuth1Session(CONSUMER_KEY, CONSUMER_SECRET, ACCESS_TOKEN, ACCESS_TOKEN_SECRET)


params = {"description": "東京工業大学14/ボート部", "location": "大岡山"}
req = twitter.post("https://api.twitter.com/1.1/account/update_profile.json", params = params)