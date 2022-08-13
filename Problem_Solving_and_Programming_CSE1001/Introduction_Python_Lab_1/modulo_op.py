mon = int(input("Enter the amount of cash the kid has "))
cost = int(input("Enter the amount for one chocolate "))
free = int(input("Enter for how many wrappers will he get a chocolate "))
cho_bought = mon//cost
free_choc = cho_bought//free
print("The number of chocolates that the kid has eaten is :-\t" ,(free_choc+cho_bought))
