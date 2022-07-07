clc
clear all
syms x y
y1=input('Enter the first function :     ')
y2=input('Enter the second function :     ')
c=solve(y1-y2);
axes
grid on
ezplot(y1)
hold on
ezplot(y2)
area=int(y1-y2,c(1),c(2));
c=double(c);
x1=linspace(c(1),c(2));
yy1=subs(y1,x,x1);
yy2=subs(y2,x,x1);
yy=[yy1,yy2];
xx1=[x1,x1];
fill(xx1,yy,'r')
sprintf('The area is :  %d',area)