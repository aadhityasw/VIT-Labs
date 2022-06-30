clc
clear all
syms c0 c1 c2 c3 c4 c5 x
p1 = input('Enter the coefficient of D2y :- ');
p2 = input('Enter the coefficient of Dy :- ');
p3 = input('Enter the coefficient of y :- ');
c = [c0 c1 c2 c3 c4 c5];
y = sum(c.*x.^(0:5));
dy = diff(y);
d2y = diff(dy);
ode = d2y*p1 + dy*p2 + y*p3;
cof = collect(ode,x);
d = coeffs(cof,x)
[c2 c3 c4 c5] = solve(d(1),d(2),d(3),d(4),c2,c3,c4,c5);
GS = subs(y);
disp('The General solution is :- ')
disp(GS)
i1 = input('Enter the value of y(0) :- ');
i2 = input('Enter the value of Dy(0) :- ');
z = subs(GS,[c0,c1],[i1,i2]);
disp('The Particular Solution is :- ')
disp(z)
ezplot(z,[-10,10])
