import urllib.request
dwn_link = 'https://r3---sn-2uja-n3ul.googlevideo.com/videoplayback?expire=1587403840&ei=4IedXv6LFNbY1wbmroxQ&ip=39.45.21.78&id=o-AIsUTNoR9sruCQeGU28AIAWUS3-t8o8DrO9kvM58w09z&itag=22&source=youtube&requiressl=yes&mh=9t&mm=31%2C29&mn=sn-2uja-n3ul%2Csn-2uja-3ipd&ms=au%2Crdu&mv=m&mvi=2&pl=18&initcwndbps=180000&vprv=1&mime=video%2Fmp4&ratebypass=yes&dur=699.106&lmt=1584195578479693&mt=1587382171&fvip=3&c=WEB&txp=5432432&sparams=expire%2Cei%2Cip%2Cid%2Citag%2Csource%2Crequiressl%2Cvprv%2Cmime%2Cratebypass%2Cdur%2Clmt&signature=AJpPlLswRAIgT3gsfloXKfydMT4iSaFwMXkhNRk633u4Iqlgqx8syuYCIGO6YNoxJfqMuZ04lBcbjnoMPb0WuyQU49kgHGsXO90T&lsparams=mh%2Cmm%2Cmn%2Cms%2Cmv%2Cmvi%2Cpl%2Cinitcwndbps&lsig=ALrAebAwRgIhAKgPMLHGoumyh7X9SPkuYzesIQeJnC3doj3ZSn05ZERbAiEAjy9FQP4-RPUG3FMtpl4PRniY17Yyjbtyj5K-uALFj5U%3D'
file_name = urllib.parse.unquote(dwn_link)
file_name = file_name.split('/')[-1]
rsp = urllib.request.urlopen(dwn_link)
print(rsp.info())
with open('file.mkv','wb') as f:
    f.write(rsp.read())
