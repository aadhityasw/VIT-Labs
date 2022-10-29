def strings(s) :
    if len(s)==0 :
        return('')
    return(s[-1]+strings(s[:len(s)-1]))
a=input()
print(strings(a))
