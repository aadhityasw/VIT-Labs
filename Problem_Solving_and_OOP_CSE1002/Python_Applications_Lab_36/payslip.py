bpay = int(input("Enter the basic pay of the Employee\t"))
leave = int(input('Enter the number of days of leave taken by the Employee\t'))
hra = 0.3 * bpay
da = 0.8 * bpay
gsal = bpay + hra + da
netsal = gsal - (bpay * (leave-1)/30)
netsal = netsal - 1800
print("The Net Salary Of the Employee is :- Rs ",netsal)
