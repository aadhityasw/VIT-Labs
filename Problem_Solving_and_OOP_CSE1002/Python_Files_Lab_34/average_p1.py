f=open("Avg","w")
f.write("1 2 3 4 5 6")
f.close()
f=open("Avg","r")
s=f.read()
ss=s.split()
sum=0
for i in ss :
    sum=sum+int(i)
print(sum/len(ss))
