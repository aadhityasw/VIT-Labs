clc
clear all
syms x
f=input('Enter the function :    ')
fx=diff(f);
fxx=diff(fx);
c=solve(fx);
xmin=min(c);
xmax=max(c);
xmin=double(xmin);
xmax=double(xmax);
D=[xmin-2,xmax+2];
ezplot(f,D)
hold on
ezplot(fx,D);
ezplot(fxx,D);
for i=1:length(c)
    a=subs(f,x,c(i));
    a=double(a);
    plot(c(i),a,'r*','markersize',15);
    b=subs(fxx,x,c(i));
    b=double(b);
    if(b==0)
        sprintf('The point %d is an inflexion point.',c(i))
    elseif (b>0)
        sprintf('The point %d is a minimum.',c(i))
    else
        sprintf('The point %d is a maximum.',c(i))
    end
end