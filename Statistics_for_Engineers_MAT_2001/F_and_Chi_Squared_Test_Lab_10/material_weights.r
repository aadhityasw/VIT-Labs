A=c(14.1, 10.1, 14.7, 13.7, 14.0)
B=c(14.0, 14.5, 13.7, 12.7, 14.1)
alpha = 0.1
n1=length(A)
n2=length(B)
TV=qf(1-alpha, n1-1, n2-1)
F=var(A)/var(B)
if(F<=TV){print("Accept H0")}else{print("Reject H0")}
