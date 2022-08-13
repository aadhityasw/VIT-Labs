print("Enter the values of a,b and c.")
a=int(input())
b=int(input())
c=int(input())
if a==b==c :
    print("All the three numbers are equal.")
elif a==b and a>c :
    print("A and B are equal and greater.")
elif b==c and b>a :
    print("B and C are equal and greater.")
elif a==c and a>b :
    print("A and C are equal and greater.")
elif a>b and a>c :
    print("A is the greatest number.")
elif b>c and b>a :
    print("B is the greatest number.")
elif c>a and c>b :
    print("C is the greatest number.")
    