clc
clear all
syms F n z
a = input('Enter the coefficent of f_(n+2) :- ');
b = input('Enter the coefficent of f_(n+1) :- ');
c = input('Enter the coefficent of f_(n) :- ');
rhs = input('Enter the RHS function :- ');
y0 = input('Enter the value of y_0 :- ');
y1 = input('Enter the value of y_1 :- ');
eq1 = a*sym('f(n+2)') + b*sym('f(n+1)') + c*sym('f(n)') - rhs;
eq2 = ztrans(eq1);
eq3 = subs(eq2,{'ztrans(f(n),n,z)','f(0)','f(1)'},{F,y0,y1});
eq4 = collect(eq3,F);
F = solve(eq4,F);
f = simplify(iztrans(F));
disp('The Solution is ')
disp(f)
m=0:10;
ys = subs(f,n,m)
stem(ys)
