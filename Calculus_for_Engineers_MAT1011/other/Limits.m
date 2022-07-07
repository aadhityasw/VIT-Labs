clc
clear all
syms x y
f=input('Enter the function :     ');
x0=input('Enter the value of x0 :    ');
y0=input('Enteer the value of y0 :     ');
l1=limit(subs(f,x,x0),y,y0);
l2=limit(subs(f,y,y0),x,x0);
m=input('Enter the value of m :     ');
n=input('Enter the value of n :     ');
y1=y0+(x-x0)^m;
x1=x0+(y-y0)^m;
l3=limit(subs(f,y,y1),x,x0);
l4=limit(subs(f,x,x1),y,y0);
if((l1==l2)&&(l2==l3)&&(l3==l4))
    sprintf('The limit may exist.')
else
    sprintf('The limit does not exist.')
end
f0=input('Enter the value of the function at the point :     ');
if((l1==l2)&&(l2==l3)&&(l3==l4)&&(l4==f0))
    sprintf('The function may be continous.')
else
    sprintf('The function is not continous.')
end