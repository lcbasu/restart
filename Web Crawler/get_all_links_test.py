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

page = '<!DOCTYPE html><!DOCTYPE html><html lang="en"><head><meta charset="UTF-8" /><meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1"><title>iFest 2012</title><link rel="stylesheet" type="text/css" href="css/style_makeover.css" /><p class="copyright"><span>&copy; IEEE IIT Roorkee | <a href="http://ifest1.ieeeiitr.com/ifest_2011.php">iFest 2011</a></span></div></body></html><span>&copy; IEEE IIT Roorkee | <a href="http://ifest2.ieeeiitr.com/ifest_2011.php">iFest 2011</a></span></div></body></html><span>&copy; IEEE IIT Roorkee | <a href="http://ifest3.ieeeiitr.com/ifest_2011.php">iFest 2011</a></span></div></body></html><span>&copy; IEEE IIT Roorkee | <a href="http://ifest4.ieeeiitr.com/ifest_2011.php">iFest 2011</a></span></div></body></html>'


links = get_all_links(page)

print links
