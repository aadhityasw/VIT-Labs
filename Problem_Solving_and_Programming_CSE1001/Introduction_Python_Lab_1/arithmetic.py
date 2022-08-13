
basic = int(input("Enter the basic pay\t"))
da = int(input("Enter the Dearness Allowance Rate in Percentage\t"))
hra = int(input("Enter the House Rent Allowance Rate in Percentage\t"))
pf = int(input("Enter the Provident Fubnd Rate in Percentage\t"))
sal = basic + (basic*da/100) + (basic*hra/100) - (basic*pf/100)
print("The salary of the Employee is :-   Rs",sal)



lh = int(input("Enter the number of hours of work for the Labor\t"))
cm = int(input("Enter the cost of the materials\t"))
rph = 45
lc = rph*lh
tc = lc + cm
print("The total Charge is ?:- Rs",tc)
