data = matrix(c(35, 42, 61, 48, 51, 68), ncol = 3, byrow = T)
data
alpha=0.05
calcu = chisq.test(data)
calcu
TV = qchisq(1-alpha,2)
TV
