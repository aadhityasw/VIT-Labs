x=c(65, 78, 88, 55, 48, 95, 66, 57, 79, 81)
xbar=mean(x)
alpha=0.05
mu=75
sd=sqrt(var(x))
n=length(x)
t=abs(xbar-mu)/(sd/sqrt(n))
t
tv=qt(1-(alpha/2), df=n-1)
tv
if(t<=tv){print("Accept H0")}else{print("Reject H0")}
