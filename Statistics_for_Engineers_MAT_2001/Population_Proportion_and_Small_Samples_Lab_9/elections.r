p=85/148
P=60/100
n=148
Q=1-P
z=abs(p-P)/(sqrt(P*Q/n))
z
alpha=0.05
zalpha=qnorm(1-alpha)
if(z<=zalpha){print("Accept H0")}else{print("Reject H0")}
