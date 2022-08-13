#To compute cash for a browsing centre.
hr = int(input("Enter the hours the Internet was used\t"))
min = int(input("Enter the minutes the internet was used\t"))
if not(hr<0 or hr>7 or(hr==7 and min>0) or min<0 or min>59) :
    amt = 0
    if hr>=5 :
        amt = 200
        hr-=5
    amt = amt + hr*50 + min
    print("The Amount to be paid is :-",amt)
else :
    if (hr>7 or (hr == 7 and min>0)) :
        print("You could not have used the internet for more than 7 hours.")
    print("Invalid Input\nEnter a valid input.")
    