# pip install tweepy
import tweepy

def about_me(client: tweepy.Client) -> None:
    """Print information about the client's user."""
    # The `public_metrics` addition will give me my followers count, among other things
    me = client.get_me(user_fields=["public_metrics"])
    print(f"My name: {me.data.name}")
    print(f"My handle: @{me.data.username}")
    print(f"My followers count: {me.data.public_metrics['followers_count']}")


def get_ztm_tweets(client: tweepy.Client) -> list[tweepy.Tweet]:
    """Return a list of latest ZTM tweets"""
    ztm = client.get_user(username="zerotomasteryio")
    response = client.get_users_tweets(ztm.data.id)
    return response.data


if __name__ == "__main__":
    client = tweepy.Client(
        bearer_token='AAAAAAAAAAAAAAAAAAAAAJxYsAEAAAAA5gB4Ho8Nf0gJfRiqP3aTnOTqBuo%3DjGeGC0IdD9rnKT1DlM3bsSklcYpm3PfgCVM4acg6D8Qp6RRyqo',
        consumer_key='en7PcRQNasQg8LsyQlRiJLGCd',
        consumer_secret='XQkQD0PuC5nOSJUzDsSuC6wNCz2oYA3bDoNddtfh6xJzVr03OJ',
        access_token='3051015577-g0CS4yCdvQv80T3kp7fMG8z4MHGxJcvMFIqqETb',
        access_token_secret='JH4bbAgy7sSCipzT5XIMY1nFR6t2ps8SZOIyy7CfS984C',
    )
    print("=== About Me ===")
    about_me(client)
    print()
    print("=== ZTM Tweets ===")
    for tweet in get_ztm_tweets(client):
        print(tweet, end="\n\n")