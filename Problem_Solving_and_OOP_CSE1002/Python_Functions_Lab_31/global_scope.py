x=99
def f(y) :
    global x
    x=1000
    z=x+y
    return(z)
a=int(input())
print(f(a))
print(a)
