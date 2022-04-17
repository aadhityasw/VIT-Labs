x = c(23, 27, 28, 28, 29, 30, 31, 33, 35, 36)
y = c(18, 20, 22, 27, 21, 29, 27, 29, 28, 29)
df2 = data.frame(x, y)
cov(x, y)

var(x, y)

sd(x)

sd(y)

corelation_coeff = cov(x, y)/(sd(x)*sd(y))
corelation_coeff

corelation_coeff1 = var(x, y)/(sd(x)*sd(y))
corelation_coeff1

corelation_coeff2 = cor(x, y)
corelation_coeff2

corelation_coeff3 = cor.test(x, y, method = 'pearson')
corelation_coeff3
