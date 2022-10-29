# Selection Sort
def minIndex(i,l) :
    min1=i
    for j in range(i+1,len(l)) :
        if l[mini]>l[j] :
            mini=j
    return mini
def selection(l) :
    n=len(l)
    for i in range(0,n) :
        j=minindex(i,l)
        if i!=j :
            l[i],l[j] = l[j],l[i]
    return(l)
n=int(input))
l=[]
for i in range(n) :
    a=int(input())
    l.append(a)
b=selection(l)
for i in b :
    print(i)
