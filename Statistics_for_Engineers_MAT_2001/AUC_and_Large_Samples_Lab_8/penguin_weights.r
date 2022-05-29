xbar=14.6
mu=15.4
sigma=2.5
n=35
z = abs(xbar-mu)/(sigma/sqrt(n))
z
alpha = 0.05
zalpha = qnorm(1-alpha/2)
zalpha
if(z<=zalpha){print("Accept H0")}else{print("Reject H0")}
