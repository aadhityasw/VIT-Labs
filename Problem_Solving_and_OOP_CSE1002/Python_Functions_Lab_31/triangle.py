import math
def linee(a,b,c) :
    if(a[0]==b[0]==c[0]) or (a[1]==b[1]==c[1]) :
        return True
    else :
        return False
def dist(a,b,c) :
    d1=math.sqrt((a[0]-b[0])**2+(a[1]-b[1])**2)
    d2=math.sqrt((c[0]-b[0])**2+(c[1]-b[1])**2)
    d3=math.sqrt((a[0]-c[0])**2+(a[1]-c[1])**2)
    return(d1,d2,d3)
def dcheck(d) :
    if d[0]<(d[1]+d[2]) :
        return(True)
    elif d[1]<(d[0]+d[2]) :
        return(True)
    elif d[2]<(d[1]+d[0]) :
        return(True)
    else :
        return(False)
x=int(input())
y=int(input())
a=(x,y)
x=int(input())
y=int(input())
b=(x,y)
x=int(input())
y=int(input())
c=(x,y)
no=False
if linee(a,b,c) :
    print('No Triangle')
    no=True
else :
    d=dist(a,b,c)
    if dcheck(d) :
        print('No Triangle')
        no=True
    if not no :
        print('Triangle')
