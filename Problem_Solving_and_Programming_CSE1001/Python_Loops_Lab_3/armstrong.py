#Armstrong Number
n = int(input("Enter a number\t"))
no = n
sum = 0
a = 0
while no>0 :
    no = int(no/10)
    a=a+1
no = n
while no>0 :
    b = int(no%10)
    no = no/10
    sum = sum + b**a
if(sum==n):
    print("It is a armstrong number.")
else :
    print("It is not a armstrong number.")
    