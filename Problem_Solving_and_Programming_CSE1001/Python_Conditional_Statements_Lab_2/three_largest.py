#Compare 3 numbers and print the largest.
n1 = int(input("Enter number 1:-\t"))
n2 = int(input("Enter number 2:-\t"))
n3 = int(input("Enter number 3:-\t"))
if n1==n2 and n2==n3 :
    print("All the three numbers are equal.")
elif n1>=n2 and n1>=n3 :
    print("The number",n1,"is the largest number.")
elif n2>=n1 and n2>=n3 :
    print("The number",n2,"is the largest number.")
elif n3>=n1 and n3>=n2 :
    print("The number",n3,"is the largest number.")
    