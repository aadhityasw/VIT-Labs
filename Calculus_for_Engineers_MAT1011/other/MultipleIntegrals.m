clc
clear all
syms x y z
f=input('Enter a finction in terms of only x and y :     ');
a=int(int(f,y,1,2),x,0,2);
viewSolidone(z,0*x+0*y+0,f,y,1+0*x,2+0*x,x,0,2)
sprintf('The value is : %d',double(a))
clc
clear all
syms x y z
figure
f=input('Enter a finction in terms of only x and y :     ');
a=int(int(f,x,0,2),y,1,2);
viewSolidone(z,0*x+0*y+0,f,x,0+0*y,2+0*y,y,1,2)
sprintf('The value is : %d',double(a))