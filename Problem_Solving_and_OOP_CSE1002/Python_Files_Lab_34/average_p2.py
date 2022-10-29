f=open("h.txt","w")
n=int(input())
for i in range(n) :
    i=int(input())
    f.write(str(i))
    f.write(" ")
f.close()
f=open("h.txt","r")
s=f.read()
print(s)
sum=0
ss=s.split()
for i in range(n) :
    sum=sum+int(ss[i])
f.close()
avg=sum/n
print(avg)
