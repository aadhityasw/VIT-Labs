def bina(a,l) :
    fir=0
    last=len(a)-1
    f=False
    while(fir<=last and not f) :
        mid=(fir+las)//2
        if a[mid] == item :
            f=True
        else :
            if item<a[mid] :
                last=mid-1
            else :
                fir=mid+1
    return(f)
n=int(input())
l=[]
for i in range(n) :
    l.append(int(input()))
l.sort()
b=int(input())
print(bina(l,b))
