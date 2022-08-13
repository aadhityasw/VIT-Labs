n = int(input("Enter the value of n:-\t"))
a=0
b=False
for i in range(2,(int(n**0.5)+1)) :
    if(n%i==0) :
        a+=1
    if(a>=1) :
        print("It is not a prime number.")
        b=True
        break
if b==False :
    print("It is a prime number")



'''
n = int(input("Enter the value of n:-\t"))
a=0
for i in range(2,(int(n**0.5)+1)) :
    if(n%i==0) :
        a+=1
    if(a>=1) :
        print("It is not a prime number.")
        break
else :
    print("It is a prime number")
'''
