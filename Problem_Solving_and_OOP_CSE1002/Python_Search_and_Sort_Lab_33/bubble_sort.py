# Bubble Sort
def bubble(a) :
    n=len(a)
    for i in range(0,n+1) :
        for j in range(0,n-1) :
            if a[j][2]<a[j+1][2] :
                a[j],a[j+1] = a[j+1],a[j]
    return(a)
n=int(input())
a=[]
for i in range(0,n) :
    name=input()
    sub=input()
    score=float(input())
    l.append((name,sub,score))
l.bubble(l)
print(l)
