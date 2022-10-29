l=[]
n==int(input())
for i in range(n) :
    ele=int(input())
    l.append(ele)
d={}
for x in l:
    freq = l.count(x)
    if freq in d:
        existing=d[freq]
        if not x in existing :
            existing.append(x)
    else:
        d[freq]=[x]
print(d)
keys = list(d.keys())
maxi=max(keys)
maxv=d[maxi]
for i in maxv :
    print(i)
