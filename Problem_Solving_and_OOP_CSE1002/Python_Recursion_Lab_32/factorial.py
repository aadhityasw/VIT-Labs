def f(n) :
    if n==1 :
        return(0)
    if n==2 :
        return 1
    return(f(n-1)+f(n-2))
n=int(input())
print(n)
