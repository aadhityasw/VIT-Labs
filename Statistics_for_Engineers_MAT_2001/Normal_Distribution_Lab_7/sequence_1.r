x = seq(-10, 10, by=0.1)
x
length(x)
pb = dnorm(x, mean=2.5, sd=0.5)
pb
plot(x, pb, main='Normal Distribution', col='red', xlab='X', ylab='Propability', type='p')
