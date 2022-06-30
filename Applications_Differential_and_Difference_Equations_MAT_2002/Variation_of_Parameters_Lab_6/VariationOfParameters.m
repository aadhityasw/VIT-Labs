clc
clear all
syms x c1 c2
p1 = input('Enter the coefficient of D2y :- ');
p2 = input('Enter the coefficent of Dy :- ');
p3 = input('Enter the coefficient of y :- ');
eq = p1*(x^2) + p2*x + p3;
r = solve(eq,x);
p = real(r(1));
q = imag(r(1));
if q~=0
    y1 = exp(p*x)*cos(q*x);
    y2 = exp(p*x)*sin(abs(q)*x);
elseif r(1)==r(2)
    y1 = exp(r(1)*x);
    y2 = x*exp(r(1)*x);
else
    y1 = exp(r(1)*x);
    y2 = exp(r(2)*x);
end
c_f = c1*y1 + c2*y2;
W = simplify(y1*diff(y2) - y2*diff(y1));
f = input('Enter the non-homogenous part :- ');
p_i = -y1*int(y2*f/W) + y2*int(y1*f/W);
G_S = simplify(c_f + p_i);
disp('The General Solution is :- ')
disp(G_S)
