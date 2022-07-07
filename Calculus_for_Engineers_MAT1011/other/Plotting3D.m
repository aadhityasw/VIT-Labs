clc
clear all
syms x y
inp=input('Enter a function');
f=inline(vectorize(inp),'x','y');
ezsurf(f);
hold on
a=linspace(-1,9,100);
b=linspace(-1,9,100);
[X,Y]=meshgrid(a,b);
ff=f(X,Y);
surf(X,Y,ff)