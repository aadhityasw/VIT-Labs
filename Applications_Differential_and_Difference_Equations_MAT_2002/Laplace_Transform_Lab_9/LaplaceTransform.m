clc
clear all
syms t s y Y
a = input('Enter the coefficent of second derrivative :- ');
b = input('Enter the coefficent of first derrivative :- ');
c = input('Enter the coefficent of y :- ');
f = input('Enter the function :- ');
d = input('Enter the value of y(0) :- ');
e = input('Enter the value of Dy(0) :- ');
eq = a*diff(sym('y(t)'),2) + b*diff(sym('y(t)'),1) + c*sym('y(t)') - f;
eq1 = laplace(eq);
eq2 = subs(eq1,{'laplace(y(t),t,s),y(0),D(y)(0)'},{Y,d,e});
eq3 = collect(eq2,Y);
Y = solve(eq2,Y);
y = ilaplace(Y);
disp('The solution is :- ')
disp(y)
ezplot(y);
