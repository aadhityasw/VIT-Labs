clc
clear all
syms x1 x2 x3 y1 y2 y3 real
eq = input('Enter the quadradic equation :- ');
a11 = (1/2)*diff(diff(eq,x1),x1);
a22 = (1/2)*diff(diff(eq,x2),x2);
a33 = (1/2)*diff(diff(eq,x3),x3);
a12 = (1/2)*diff(diff(eq,x1),x2);
a21=a12;
a13 = (1/2)*diff(diff(eq,x1),x3);
a31=a13;
a23 = (1/2)*diff(diff(eq,x3),x2);
a32=a23;
A = [a11,a12,a13;a21,a22,a23;a31,a32,a33];
A = double(A)
[M D] = eig(A);
Y = [y1;y2;y3];
display('The canonical form is :- ')
cf = vpa(Y' * D * Y)
