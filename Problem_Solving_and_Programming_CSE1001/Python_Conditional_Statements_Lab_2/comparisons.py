#%%
n1 = int(input())
n2 = int(input())
n3 = int(input())
if n1==n2==n3 :
    print("All are equal")
elif n1==n2 and n1>n3 :
    print("n1 and n2 are equal and greater.")
elif n2==n3 and n2>n1 :
    print("n2 and n3 are equal and greater.")
elif n1==n3 and n3>n2 :
    print("n1 and n3 are equal and greater.")
elif n1>n2 and n1>n3 :
    print("n1 is the greatest number.")
elif n2>n3 and n2>n1 :
    print("n2 is the greatest number.")
elif n3>n1 and n3>n2 :
    print("n3 is the greatest number.")


# %%
n1 = int(input())
n2 = int(input())
n3 = int(input())
if n1==n2==n3 :
    print("All are equal")
elif n1==n2 :
    if n1>n3 :
        print("n1 and n2 are equal and greater.")
    else :
        print("n3 is the greatest number.")
elif n2==n3 :
    if n2>n1 :
        print("n2 and n3 are equal and greater.")
    else :
        print("n1 is the greatest number.")
elif n1==n3 :
    if n3>n2 :
        print("n1 and n3 are equal and greater.")
    else :
        print("n2 is the greatest number.")
