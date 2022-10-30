ht = float(input("Enter Your Height\t"))
wt = float(input("Enter your Weight\t"))
bmi = wt/(ht*ht)
if bmi<16.0 :
    print("Seriously underweight")
elif bmi<18.0 :
    print("Underweight")
elif bmi<24.0 :
    print("Normal Weight")
elif bmi<29.0 :
    print("Overweight")
elif bmi<35.0 :
    print("Gravelly Overweight")
