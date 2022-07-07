clc
clear all
syms x y
f=input('Enter the function :     ');
x1=input('Enter the x value :     ');
y1=input('Enter the y value :     ');
ezsurf(f,[x1-2,x1+2]);
hold on
fx=diff(f,x);
s=subs(subs(fx,x,x1),y,y1);
z1=subs(subs(f,x,x1),y,y1);
[x2,z2]=meshgrid(x1-2:0.25:x1+2,0:0.5:10);
z=subs(z1,x,x1);
y2=y1*ones(size(x2));
surf(x2,y2,z2)
z2=z+s*(x-x1);
ezplot(z2,[x1-2,x1+2])
hold off