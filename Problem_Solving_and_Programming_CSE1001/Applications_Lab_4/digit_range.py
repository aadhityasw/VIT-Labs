n=int(input())
a=n%10
b=n%100
if a>=5 :
    print("Greater one digit")
else :
    print("Lesser one digit")
if b>=50 :
    print("Greater two digits")
else :
    print("Lesser two digits")
if n>=500 :
    print("Greater three digits")
else :
    print("Lesser three digits")
    