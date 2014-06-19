import urllib

def get_web_page(page_url):
	response = urllib.urlopen(page_url)
	page_source = response.read()
	return page_source

def union(list1, list2):
	for e in list2:
		if e not in list1:
			list1.append(e)
	
def get_next_target(page):
	start_link = page.find('<a href="')
	if start_link == -1:
		return None,0
	start_quote = page.find('"',start_link)
	end_quote = page.find('"',start_quote+1)
	url = page[start_quote+1:end_quote]
	
	return url,end_quote

def get_all_links(page):
	links = []
	while True :
		url, end_pos = get_next_target(page)
		if url:
			links.append(url)
			page = page[end_pos:]
		else:
			break
	return links
	
def lookup(index,keyword):
	for e in index:
		if e[0] == keyword:
			return e[1]
	return []

def add_to_index(index,keyword,url):
	if keyword in index:
		index[keyword].append(url)
	else:
		index[keyword] = [url]

def add_page_to_index(index,url,contents):
	keywords = contents.split()
	for e in keywords:
		add_to_index(index,e,url)

def lookup(index,keyword):
	if keyword in index:
		return index[keyword]
	else:
		return None


def crawl_web(seed):
	to_crawl = [seed]
	crawled = []
	index = {}
	while to_crawl:
		page_url = to_crawl.pop()
		page = get_web_page(page_url)
		if page_url not in crawled:
			add_page_to_index(index,page_url,page)
			union(to_crawl,get_all_links(page))
			crawled.append(page_url)				
	return index
	
seed = "http://www.udacity.com/cs101x/index.html"

print crawl_web(seed)