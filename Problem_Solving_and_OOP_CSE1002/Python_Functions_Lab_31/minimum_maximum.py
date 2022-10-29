def f() :
    l.sort()
    return(l[0],l[-1])
l=[]
n=int(input())
for i in range(0,n):
    l.append(int(input()))
min1,max1 = f()
print(min1,max1)
