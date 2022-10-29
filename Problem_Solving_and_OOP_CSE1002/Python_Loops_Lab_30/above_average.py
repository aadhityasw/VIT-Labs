n = int(input())

l = []

for i in range(0,n):

    l.append(int(input()))
sum=0

for x in l:

    sum+=x

avg = sum/n

for x in l:

    if x > avg:

       print(x)
