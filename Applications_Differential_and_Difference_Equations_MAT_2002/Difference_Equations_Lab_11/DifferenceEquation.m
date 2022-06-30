clc
clear all
syms c1 c2 x n
a = input('Enter the coefficent of y_(n+2) :- ');
b = input('Enter the coefficent of y_(n+1) :- ');
c = input('Enter the coefficent of y_(n) :- ');
eq = a*x^2 + b*x +c;
r = solve(eq,x);
if imag(r(1))~=0
    rho = sqrt(real(r(1))^2 + imag(r(1))^2 + 2);
    theta = atan(abs(imag(r(1)))/real(r(1)));
    y1 = (rho^n)*cos(n*theta);
    y2 = (rho^n)*sin(n*theta);
elseif r(1)==r(2)
    y1 = r(1)^n;
    y2 = n*(r(1)^n);
else
    y1 = r(1)^n;
    y2 = r(2)^n;
end
yc = c1*y1 + c2*y2;
disp('General solution is :- ')
disp(yc)
y0 = input('Enter the value of y(0) :- ');
y1 = input('Enter the value of y(1) :- ');
eq0 = subs(yc,n,y0);
eq1 = subs(yc,n,y1);
eq0 = eq0-y0;
eq1 = eq1-y1;
[c1 c2] = solve(eq0,eq1);
ys = subs(yc);
m = 0:10;
ys = subs(ys,n,m);
stem(ys)