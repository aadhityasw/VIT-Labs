sample(1:50, 5)

x = 1:50
sample(x, 10)

sample(1:4,10, replace=TRUE)

dice = as.vector(outer(1:6, 1:6,paste))
dice

sample(c('H', "T"), 10, replace=TRUE)

sample(c('Success', 'Failure'), 10, replace=TRUE, prob = c(0.9, 0.1))

choose(10, 7)

p = factorial(10)/factorial(5)
p
