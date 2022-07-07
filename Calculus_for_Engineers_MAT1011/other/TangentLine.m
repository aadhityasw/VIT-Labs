clc
clear all
syms x
finp=input('Enter the function    ')
xp=input('Enter the x value    ')
f=inline(vectorize(finp),'x');
yp=f(xp);
plot(xp,yp,'*','markersize',19)
hold on
ezplot(f)
fx=diff(finp);
slope=subs(fx,x,xp);
y=yp+slope*(x-xp);
ezplot(y ,[xp-2 xp+2])