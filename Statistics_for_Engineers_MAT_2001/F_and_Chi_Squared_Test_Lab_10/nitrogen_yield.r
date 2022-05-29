A=c(13.4, 10.9, 11.2, 11.8, 14.0, 15.3, 14.2, 12.6, 17.0, 16.2, 16.5, 15.7)
B=c(12.0, 11.7, 10.7, 11.2, 14.8, 14.4, 13.9, 13.7, 16.9, 16.0, 15.6, 16.0)
alpha = 0.05
n1=length(A)
n2=length(B)
TV=qf(1-alpha, n1-1, n2-1)
F=var(A)/var(B)
if(F<=TV){print("Accept H0")}else{print("Reject H0")}
