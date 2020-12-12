import urllib.request
import requests


dwn_link = 'http://d1.usersdrive.com:182/d/z6j5uvqc2as5ln23qpj3dhrqm3qxckvwgnheydngsc3qrflujdqcwlcbwt5xx5qebgvmgxxv/free4pc.org_IDM%20_%206.37%20Build%2010____%20_.rar'
#file_name = urllib.parse.unquote(urllib.parse.unquote(dwn_link))
#print(file_name)
#file_name = urllib.parse.parse_qs(dwn_link)
#file_name = file_name.split('/')[-1]
#print(file_name)
fd = open('ha.rar', 'wb')
r = requests.get(dwn_link, stream=True)
print(r.headers.get('Content-Length'))

for chunk in r.iter_content(1024*10):
    fd.write(chunk)
fd.close()
