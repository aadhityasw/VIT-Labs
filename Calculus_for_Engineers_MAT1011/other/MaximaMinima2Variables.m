clc
clear all
syms x y
f=input('Enter the function :     ');
[ax,ay]=solve(f,x,y);
r=1;
for i=1:1:size(ax)
    if((imag(ax(i))==0)&&(imag(ay(i)==0)))
        px(r)=ax(i);
        py(r)=ay(i);
        r=r+1;
    end
end
a1=double(min(px));
a2=double(max(px));
b1=double(min(py));
b2=double(max(py));
ezsurf(f,[a1-.2,a2+.2,b1-.2,b1+.2])
hold on
fx=diff(f,x);
fy=diff(f,y);
fxx=diff(fx,x);
fyy=diff(fy,y);
fxy=diff(fx,y);
D=fxx*fyy-fxy^2;
for i=1:r-1
    a=subs(subs(D,x,px(i)),y,py(i));
    b=subs(subs(fxx,x,px(i)),y,py(i));
    if(a==0)
        sprintf('The point is (%d,%d) and further investigationis needed.',double(px(i)),double(py(i)))
    elseif(a<0)
        sprintf('The point is (%d,%d) and it is a saddle point.',double(px(i)),double(py(i)))
        c=subs(subs(f,x,px(i)),y,py(i));
        plot3(px(i),py(i),c,'r*','markersize',15)
    else
        if(b>0)
            sprintf('The point is (%d,%d) and it is a minima.',double(px(i)),double(py(i)))
            c=subs(subs(f,x,px(i)),y,py(i));
            plot3(px(i),py(i),c,'r*','markersize',15)
        elseif(b<0)
            sprintf('The point is (%d,%d) and it is a maxima.',double(px(i)),double(py(i)))
            c=subs(subs(f,x,px(i)),y,py(i));
            plot3(px(i),py(i),c,'r*','markersize',15)
        end
    end
end