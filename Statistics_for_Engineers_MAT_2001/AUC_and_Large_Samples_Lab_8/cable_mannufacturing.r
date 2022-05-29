xbar=1850
mu=1800
sigma=100
n=50
z = abs(xbar-mu)/(sigma/sqrt(n))
z
alpha = 0.05
zalpha = qnorm(1-alpha)
zalpha
if(z<zalpha){print("Accept H0")}else{print("Reject H0")}
