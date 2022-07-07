clc
clear all
syms t s
T=input('Enter the period of the function. :     ');
n=input('Enter the number of breakpoints in the function :     ');
fun=0*t;
for i=1:n
    a(i)=input('Enter the lower boundary of the ith interval :     ');
    b(i)=input('Enter the upper boundary of the i th interval :     ');
    f(i)=input('Enter the function of the i th function :     ');
    fun=fun+f(i)*(heaviside(t-a(i))-heaviside(t-b(i)));
end
ezplot(fun,[a(1),b(n)])
sum=0;
for i=1:n
    sum=sum+int(exp(-s*t)*f(i),t,a(i),b(i));
end
sum=sum/(1-exp(-s*T));
sum=simplify(sum);
figure
ezplot(sum,[a(1),b(n)])