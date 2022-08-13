print("Enter the values of a,b,c,d,e and f.")
a=int(input())
b=int(input())
c=int(input())
d=int(input())
e=int(input())
f=int(input())
dAB=(((c-a)**2)+(d-b)**2)**0.5
dBC=(((e-c)**2)+(f-d)**2)**0.5
dAC=(((e-a)**2)+(f-b)**2)**0.5
s=(dAB+dBC+dAC)/2
area = (s*(s-dAB)*(s-dBC)*(s-dAC))**0.5
print("Area :- \t",area)
