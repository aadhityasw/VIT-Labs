x=c(0.593, 0.142, 0.329, 0.691, 0.231, 0.793, 0.519, 0.392, 0.418)
xbar=mean(x)
alpha=0.05
mu=0.3
sd=sqrt(var(x))
n=length(x)
t=abs(xbar-mu)/(sd/sqrt(n))
t
tv=qt(1-alpha, df=n-1)
tv
if(t<=tv){print("Accept H0")}else{print("Reject H0")}
