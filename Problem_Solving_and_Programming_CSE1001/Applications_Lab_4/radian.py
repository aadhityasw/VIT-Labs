import math
print("Enter the values of a,b and c.")
a=int(input())
b=int(input())
c=int(input())
co=((b**2)+(c**2)-(a**2))/(2*b*c)
ans=math.acos(co)
print("The value of the angle A in Radians is :-\t",ans,"rad")
ans = ans*180*7/22
print("The value of the angle A in Degrees is :-\t",ans,"degrees")
