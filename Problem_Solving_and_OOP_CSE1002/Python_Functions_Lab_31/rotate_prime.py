#rotate a number and find the prime number

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
def prime(x) :
    for i in range(2,x) :
        if x%i==0 :
            return(False)
    return(True)
def rotate(x,a) :
    b=x%(10**(a-1))
    x=x//(10**(a-1))
    x=(b*10)+x
    return(x)
a=count(no)
for i in range(a) :
    if prime(no)==False :
        print('No')
        sys.exit()
    no=rotate(no,a)
print('Yes')
