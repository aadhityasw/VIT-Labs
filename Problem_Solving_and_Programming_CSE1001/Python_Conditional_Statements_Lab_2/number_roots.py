a = int(input())
b = int(input())
c = int(input())
d = b**2 - (4*a*c)
if(d>0) :
    print("The roots are real.")
elif d==0 :
    print("The roots are real and equal.")
elif d<0 :
    print("The roots are imaginary.")
r1 = (-1*b)+((b**2 - (4*a*c))**0.5)/(2*a)
r2 = (-1*b)-((b**2 - (4*a*c))**0.5)/(2*a)
print("The roota are :- \t" ,r1,"and",r2)
