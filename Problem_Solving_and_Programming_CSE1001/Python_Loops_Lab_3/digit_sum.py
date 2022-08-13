n = int(input("Enter the value of n:-\t"))
no = n
sum=0
while no>0 :
    a = no%10
    sum+=a
    no = int(no/10)
print("The sum of the digits is :-",sum)
