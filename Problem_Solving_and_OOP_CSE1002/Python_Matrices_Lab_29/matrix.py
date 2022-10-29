n=int(input())
m=int(input())
ma=[]
for i in range(0,n) :
    ma.append([])
    for j in range(0,m) :
        a=int(input())
        ma[i].append(a)
for i in range(n) :
    for j in range(m) :
        print(ma[i][j],end=' ')
    print()
