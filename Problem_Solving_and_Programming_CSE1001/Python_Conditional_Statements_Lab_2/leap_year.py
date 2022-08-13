#To check if a year is a leap year or not.
n = int(input("Enter a year"))
if (n%4 == 0 and n%100 != 0) or n%400==0 :
    print("Leap Year")
else :
    print("Not Leap Year")
    