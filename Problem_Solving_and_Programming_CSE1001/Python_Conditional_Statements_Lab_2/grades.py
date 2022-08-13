#To convert marks to grade.
m = int(input("Enter the marks\t"))
if m>100 or m<0 :
    print("Invalid Input.")
else :
    if m>=90 :
        print("S Grade")
    elif m>=80 :
        print("A Grade")
    elif m>=70 :
        print("B Grade")
    elif m>=60 :
        print("C Grade")
    elif m>=50 :
        print("D Grade")
    else :
        print("You Fail")
        