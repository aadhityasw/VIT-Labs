#Problem 1 : Compute P(x=5) labda  =7
> p5 = dpois(x=5, lambda = 7)
> p5

#Problem 2 : Compute P(x=5), P(x=4),…,P(x=0) labda  =7
> p6 = dpois(x=0:5, lambda = 7)
> p6

#Problem 3 : P(x<=5), lamba=7
> p7 = sum(dpois(x=0:5, lambda = 7))
> p7

#Problem 4 : P(x>5), lamba=7
> p6 = ppois(q=5, lambda = 7, lower.tail = FALSE)
> p6
> p7 = round(ppois(q=5, lambda = 7, lower.tail = FALSE), 4)
> p7

#Problem 5 : Check the relation between mean and variance in Poisson distribution with lamba=4, and n=100
> X.val = 0:100
> P.val = dpois(X.val, 4)
> mean1 = sum(X.val*P.val)
> mean1
> var = sum((X.val-mean1)^2*P.val)
> var

#Problem 6 : Compute probability and cumulative probability for values in 0 to 10 with parameter 2.
> X = 0:10
> cdf = ppois(q=0:10, lambda = 2, lower.tail = TRUE)
> cdf
> pdf1 = dpois(x=0:10, lambda = 2)
> pdf1

#Problem 7 : lamba = 12, P(X>=17)
> p = ppois(q=16, 12, lower.tail = FALSE)
> p
