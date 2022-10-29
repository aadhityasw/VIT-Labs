n=int(input())
l=[]
co=[]
p=[]
vow='AEIOUaeiou'
for i in range(n) :
     l.append(input())
p=0
for i in l :
     c=0
     for j in i :
          if j in vow :
               c=c+1
     co.append(c)
     p=p+1
max=co[0]
for i in co :
     if max<i :
          max=i
po=[]
for i in range (len(co)) :
     if max==co[i] :
          po.append(l[i])
print(po)
