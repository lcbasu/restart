import urllib

def get_web_page(page_url):
	response = urllib.urlopen(page_url)
	page_source = response.read()
	return page_source

def get_next_target(page):
	start_link = page.find('<a href="')
	if start_link == -1:
		return None,0
	start_quote = page.find('"',start_link)
	end_quote = page.find('"',start_quote+1)
	url = page[start_quote+1:end_quote]
	
	return url,end_quote

def get_all_links(page_url):
	links = []
	page = get_web_page(page_url)
	while True :
		url, end_pos = get_next_target(page)
		if url:
			links.append(url)
			page = page[end_pos:]
		else:
			break
	return links
def crawl_web(seed):
	crawled = []
	to_crawl = get_all_links(seed)
	crawled.append(seed)
	for e in to_crawl:
		tmp_list = get_all_links(e)
		crawled.append(e)
		for f in tmp_list:
			if f not in crawled:
				to_crawl.append(f)
	return crawled
	
seed = "http://www.udacity.com/cs101x/index.html/"

print crawl_web(seed)