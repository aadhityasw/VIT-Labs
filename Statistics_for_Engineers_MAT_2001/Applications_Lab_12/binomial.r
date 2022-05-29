n=7
p=1/4
q=1-p
a = dbinom(2, n, p)
a
a = dbinom(0:7, n, p)
a
table1 = table(a)
table1
x=0:7
plot(x, a, type = 'l')
