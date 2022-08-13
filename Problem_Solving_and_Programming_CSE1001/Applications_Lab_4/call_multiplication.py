x=int(input())
n=int(input())
if n>50 or n<0 :
    print("Invalid input")
else :
    a=n//3
    ans=x*(8**a)
    print(ans)
    