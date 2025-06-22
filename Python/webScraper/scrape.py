import requests
from bs4 import BeautifulSoup
import pprint

def resultingLinks(link):
    res = requests.get(link)
    return res

res1 = resultingLinks('https://news.ycombinator.com/news')
res2 = resultingLinks('https://news.ycombinator.com/?p=2')

soup = BeautifulSoup(res1.text, 'html.parser')
soup2 = BeautifulSoup(res2.text, 'html.parser')
# print(soup.body.contents) # returns the html body tags in a list
# print(soup.find_all('div')) #just find returns the first iteration
# print(soup.find(id="score_39296581"))
# print(soup.select('.score'))
# print(soup.select('#score_39296581')) # grabs the specific score
links = soup.select('.titleline > a')
links2 = soup2.select('.titleline > a')
# votes = soup.select('.score')
subtext = soup.select('.subtext')
subtext2 = soup2.select('.subtext')
# print(votes[0].get('id'))

mega_links = links + links2
mega_subtext = subtext + subtext2

def sort_stories_by_votes(hnlist):
    return sorted(hnlist, key=lambda k:k['votes'], reverse = True)

def create_custom_hn(links, subtext):
    hn = []
    for idx, item in enumerate(links):
        title = item.getText()
        href = item.get('href', None)
        vote = subtext[idx].select('.score')
        if len(vote):
            points = int(vote[0].getText().replace(' points',''))
            if points > 99:
                hn.append({'title': title, 'link': href, 'votes': points})
    return sort_stories_by_votes(hn)
hello = pprint
hello.pprint(create_custom_hn(mega_links, mega_subtext))