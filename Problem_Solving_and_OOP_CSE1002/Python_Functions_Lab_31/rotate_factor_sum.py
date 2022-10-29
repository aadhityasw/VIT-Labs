#rotate a number and find the one with the largest sum of factors.
import sys
n=int(input())
no=n
def count(x) :
    b=0
    while(x>0) :
        a=x%10
        b=b+1
        x=x//10
    return(b)
def rotate(x,a) :
    b=x%(10**(a-1))
    x=x//(10**(a-1))
    x=(b*10)+x
    return(x)
def summ(x) :
    s=0
    for i in range(1,x) :
        if x%i==0 :
            s=s+i
    return(s)
a=count(no)
l=[]
for i in range(a) :
    noo=rotate(no,a)
    l.append(summ(noo))
print(max(l))
