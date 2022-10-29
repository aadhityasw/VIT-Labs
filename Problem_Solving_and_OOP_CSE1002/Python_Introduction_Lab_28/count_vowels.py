name=input()
a=0
check = 'aeiouAEIOU'
for i in range (0,len(check)) :
    for j in range (0,len(name)) :
        if(check[i]==name[j]) :
            a=a+1
print(a)
