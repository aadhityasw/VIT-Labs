ma=set()
p=set()
c=()
cs=()
m=int(input())
for i in range(m) :
    val=input()
    ma=ma|{val}
m=int(input())
for i in range(m) :
    val=input()
    p=p|{val}
m=int(input())
for i in range(m) :
    val=input()
    c=c|{val}
m=int(input())
for i in range(m) :
    val=input()
    cs=cs|{val}
failure=ma|p|c|cs
print(len(failure))
