%In 2D
clc
clear all
syms x y
f=input('Enter the function in terms of [x,y] :     ');
P=inline(vectorize(f(1)),'x','y');
Q=inline(vectorize(f(2)),'x','y');
x=linspace(0,1,10);
[X,Y]=meshgrid(x,x);
U=P(X,Y);
V=Q(X,Y);
quiver(X,Y,U,V,1)

%In 3D
clc
clear all
syms x y z
f=input('Enter the function in terms of [x,y,z] :     ');
P=inline(vectorize(f(1)),'x','y','z');
Q=inline(vectorize(f(2)),'x','y','z');
R=inline(vectorize(f(3)),'x','y','z');
x=linspace(0,1,10);
[X,Y,Z]=meshgrid(x,x,x);
U=P(X,Y,Z);
V=Q(X,Y,Z);
W=R(X,Y,Z);
quiver3(X,Y,Z,U,V,W,1)
