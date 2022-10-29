s=input()
s.strip()
l=[]
d={}
l=s.split(' ')
for i in range(len(l)) :
    s=0
    for j in l[i] :
        if ord(j)<=122 and ord(j)>=97 :
            a='abcdefghijklmnopqrstuvwxyz'.index(j)
        elif ord(j)<=90 and ord(j)>=65 :
            a='ABCDEFGHIJKLMNOPQRSTUVWXYZ'.index(j)
        s=s+a+1
    d[l[i]]=s
l1=list(d.values())
m=max(l1)
for i in l :
    if d[i] ==m :
        print(i)
