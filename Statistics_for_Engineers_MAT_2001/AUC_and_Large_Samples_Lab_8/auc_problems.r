#Problem 1 : Plotting a function
x  =seq(-3, 3, length=200)
y = dnorm(x, mean = 0, sd=1)
plot(x, y, type = "l")


#Problem 2 : find the area to the left of 1
x  =seq(-3, 1, length=200)
y = dnorm(x, mean = 0, sd=1)
polygon(c(-3, x, 1), c(0, y, 0), col = "blue")
pnorm(0, mean = 0, sd=1)
pnorm(1, mean = 0, sd=1)


#Problem 3 : find the area to the right of 1
x  =seq(1, 3, length=200)
y = dnorm(x, mean = 0, sd=1)
polygon(c(1, x, 3), c(0, y, 0), col = "blue")
pnorm(3, mean = 0, sd=1) - pnorm(1, mean = 0, sd=1)


#Problem 4 : find the P(30< X <70) with mean=50 and sd=10
x = seq(30, 70, length=100)
y = dnorm(x, mean = 50, sd=10)
polygon(c(30, x, -0.2533), c(0, y, 0), col = "blue")
qnorm(0.40, mean = 0, sd=1)


#Problem 5 : Qnorm
x=seq(-3, 3, length=10)
prob = dnorm(x, mean = 0, sd=1)
qnorm(prob, mean = 0, sd=1)

