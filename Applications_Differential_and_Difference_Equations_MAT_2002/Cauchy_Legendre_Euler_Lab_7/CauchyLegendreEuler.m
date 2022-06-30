clc
clear all
syms x r c1 c2 t
k1 = input('Enter the coefficient of (ax+b)^2 * d2y/dx2 :- ');
k2 = input('Enter the coefficent of (ax+b) * dy/dx :- ');
k3 = input('Enter the coefficient of y :- ');
a = input('Enter the value of a :- ');
b = input('Enter the value of b :- ');
f = input('Enter the value of the function in terms of x :- ');
f = simplify(subs(f,x,((exp(t)-b)/a)));
eq = k1*a^2*r^2 + (k2*a - k1*a^2)*r +k3;
r = solve(eq,r);
p = real(r(1));
q = imag(r(1));
if q~=0
    y1 = exp(p*t)*cos(q*t);
    y2 = exp(p*t)*sin((q)*t);
elseif r(1)==r(2)
    y1 = exp(r(1)*t);
    y2 = t*exp(r(1)*t);
else
    y1 = exp(r(1)*t);
    y2 = exp(r(2)*t);
end
c_f = c1*y1 + c2*y2;
W = simplify(y1*diff(y2,t) - y2*diff(y1,t));
p_i = simplify(-y1*int(y2*f/(a^2*k1*W),t) + y2*int(y1*f/(a^2*k1*W),t));
g_s = c_f + p_i;
g_s = simplify(subs(g_s,t,log(a*x + b)));
disp('The General Solution is :- ')
disp(g_s)

a1 = input('Enter the initial value :- ');
c = input('Enter the initial value of y :- ');
d = input('Enter the initial value of Dy :- ');
eq1 = subs(g_s,x,a1)-c;
eq2 = subs(diff(g_s),x,a1)-d;
[c1 c2] = solve(eq1,eq2);
y = subs(g_s);
disp('The Solution to the initial value proble is :- ')
disp(y)
ezplot(y)