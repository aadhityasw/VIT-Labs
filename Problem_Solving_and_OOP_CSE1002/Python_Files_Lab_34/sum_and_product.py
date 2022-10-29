f=open("r.txt","w")
fo=open("q.txt","w")
sum=0
pr=1
for i in range(10) :
  p=int(input())
  sum=sum+p
  pr=pr*p
f.write(str(sum))
fo.write(str(pr))
f.close()
fo.close()
