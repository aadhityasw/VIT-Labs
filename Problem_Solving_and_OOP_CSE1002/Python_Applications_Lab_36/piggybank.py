one = int(input("Enter the number of one rupee coins in the Piggy bank\t"))
two = int(input("Enter the number of two rupee coins in the Piggy bank\t"))
five = int(input("Enter the number of five rupee coins in the Piggy bank\t"))
ten = int(input("Enter the number of ten rupee coins in the Piggy bank\t"))
cost = int(input("Enter the price of the comic book\t"))
if one<0 | two<0 | five<0 |ten<0 :
    print("Enter a valid input")
else :
    amt = one + (two*2)+ (five*5) + (ten*10)
    back = amt - cost
    print("The total money collected in the Piggy bank is Rs",amt)
    print("The amount of oney to be returned to the Piggy bank after the purchase of the comic book is Rs",back)
