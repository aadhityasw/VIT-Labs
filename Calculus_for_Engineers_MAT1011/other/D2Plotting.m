clc
clear all
syms x b
f=input('Enter a function.')
p=inline(vectorize(f),'x');
x=linspace(-2*pi,2*pi,90);
a=p(x);
subplot(2,2,1)
plot(a)
hold on
ezplot(p)
y=cos(b);
subplot(2,2,2)
ezplot(y)
subplot(2,2,3)
ezplot(y)
subplot(2,2,4)
ezplot(sec(b))