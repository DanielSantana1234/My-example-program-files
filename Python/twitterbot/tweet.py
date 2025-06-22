import tweepy
import time

auth = tweepy.OAuthHandler('')
auth.set_access_token('')

api = tweepy.API(auth)
user = api.me()

def limit_handler(cursor):
    try:
        while True:
            yield cursor.next()
    except tweepy.RateLimitError:
        time.sleep(300)

search_string = 'python'
numberofTweets = 2

for tweet in tweepy.Cursor(api.search, search_string).items(numberofTweets):
    try:
        tweet.favorite()
        tweet.retweet()
        print('I liked that tweet')
    except tweepy.TweepError as e:
        print(e.reason)
    except StopIteration:
        break

# Generous Bot
# for follower in limit_handler(tweepy.Cursor(api.followers).items()):
#     if follower.name == 'Ajeassmith':
#         follower.follow()
#         break