clc
clear all
syms x y
f=input('Enter the function :     ');
fx=diff(f,x);
fy=diff(f,y);
x=linspace(0,1,10);
P=inline(vectorize(fx),'x','y');
Q=inline(vectorize(fy),'x','y');
[X,Y]=meshgrid(x,x);
U=P(X,Y);
V=P(X,Y);
quiver(X,Y,U,V,15)
axis on
hold on
ezcontour(f,[-1,1])