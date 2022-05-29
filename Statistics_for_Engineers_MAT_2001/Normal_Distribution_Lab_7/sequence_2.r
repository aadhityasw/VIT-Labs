x = seq(-3, 3, length=200)
x
pb = dnorm(x, mean=0, sd=1)
pb
plot(x, pb, main='Normal Distribution', col='red', xlab='X', ylab='Propability', type=‘p')
