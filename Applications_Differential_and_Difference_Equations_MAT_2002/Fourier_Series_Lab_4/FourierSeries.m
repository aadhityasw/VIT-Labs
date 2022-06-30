clc
clear all
syms x
ll = input('Enter the lower boundary :- ');
ul = input('Enter the upper boundary :- ');
l = (ul-ll)/2;
pr = input('Enter the partitions in the form of a vector :- ');
f = input('Enter the periodic function in the form of a vector :- ');
no = input('Enter the number of terms of the fourier series to be calculated :- ');
for n=1:no
    for i=1:length(pr)-1
        aa_0(i) = int(f(i),x,pr(i),pr(i+1));
        aa(i) = int(f(i)*cos(n*pi*x/l),x,pr(i),pr(i+1));
        bb(i) = int(f(i)*sin(n*pi*x/l),x,pr(i),pr(i+1));
    end
    a0 = vpa((1/l)*sum(aa_0),3);
    a(n) = vpa((1/l)*sum(aa),3);
    b(n) = vpa((1/l)*sum(bb),3);
    F(n) = a(n)*cos(n*pi*x/l) + b(n)*sin(n*pi*x/l);
end
F_S = vpa((a0/2) + sum(F),3);
disp('The Fourier series solution is :- ')
disp(F_S)
g1 = ezplot(a0/2,[ll,ul])
hold on
g2 = ezplot(F_S,[ll,ul])
