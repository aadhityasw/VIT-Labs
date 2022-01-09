def addl(a,b):
    carry = 0
    c = [0]*len(a)
    h = [0]*len(a)
    for i in range(len(a)-1,-1,-1):
        c[i] = (a[i]+carry+b[i])%2
        carry = (a[i]+carry+b[i])//2
    if carry ==1:
        h[-1]=1
        c = addl(h,c)
    return c
a = input()
n = int(input())
b = len(a)
c =  list(map(int,a))
h = c[0:n]
h1 = c[n:2*n]
h2 = addl(h,h1)
for i in range(2,b//n):
    h2 = addl(h2,c[i*n:(i+1)*n])
for i in range(0,n):
    print((h2[i]+1)%2, end=””)
