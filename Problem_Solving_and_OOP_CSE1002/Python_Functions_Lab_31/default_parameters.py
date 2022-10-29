def pow(x,y=2) :
    return(x**y)


def sumlist(l,n=2) :
    s=0
    for i in range(n):
        s=s+l[i]
    return(s)



def indexgreater(s,ch,n=0) :
    for i in range(n,len(s)) :
        if ord(s[i])>ord(ch) :
            return(i)
    return(-1)
