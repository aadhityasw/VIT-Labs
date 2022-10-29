def seq(a,it) :
    f=False
    for i in range(0,len(a)) :
        if a[i]==it :
            f=True
    return f
n=int(input())
l=[]
for i in range(n) :
    l.append(int(input()))
b=int(input())
print(seq(l,b))
