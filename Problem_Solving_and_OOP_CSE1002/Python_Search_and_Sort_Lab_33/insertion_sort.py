# Insertion Sort
def insert(f) :
    for i in range(1,len(f)) :
        j=i
        while j>0 and f[j]>f[j-1] :
            f[j],f[j-1]=f[j-1].f[j]
            i=i-1
    return(f)
n=int(input))
l=[]
for i in range(n) :
    a=int(input())
    l.append(a)
b=insert(l)
for i in b :
    print(i)
