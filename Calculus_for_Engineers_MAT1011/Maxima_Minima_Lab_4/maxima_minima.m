clc
clear all
syms x y real
f= input('Enter the function f(x):');
fx= diff(f,x);
ax=solve(fx)
fxx= diff(fx,x);
D=fxx;
figure ezplot(f,[min(double(ax))-.5,max(double(ax))+.5]);
for i = 1:1:size(ax) 
    T1=subs(D,x,ax(i)); 
    T2=subs(f,x,ax(i));
    if(double(T1) == 0)
        sprintf('The point %d needs further investigation', double(ax(i)))
    elseif (double(T1) < 0)
        sprintf('The maximum value of the function is %d at the point%d',double(T2),double(ax(i))) st = 'y.';
    else
        sprintf('The minimum value of the function is %d at the point %d',double(T2),double(ax(i)))
    st = 'k*'; 
    end
hold on 
plot(double(ax(i)),double(T2),st,'markersize',20); 
end