%% Secant Method

clc;
clear all;
syms x;

%%

% enter f(x)=0
f = (x * tan(x)) + 1;

% Enter the interval (closed) where the root is to be found
I = [2, 3];

% Enter the accuracy needed
accuracy_decimal = 5;


%%

% We determine an epsilon value based on this input
% If we want n decimal place accuracy, we calculate (n+1) places in each
% step.
epsilon = 10 ^ (-1 * accuracy_decimal);

x_old = I(1);
f_old = subs(f, x, x_old);
x_cur = I(2);
f_cur = subs(f, x, x_cur);
x_new = inf;

i = 0;
fprintf("Iteration %d : x = %f    f(x)  =  %f\n", i, x_old, f_old)
i = i + 1;
fprintf("Iteration %d : x = %f    f(x)  =  %f\n", i, x_cur, f_cur)
i = i + 1;


%%

while (abs(x_cur - x_old) > epsilon) && (i < 20)
    
    x_new = ((x_old * f_cur) - (x_cur * f_old)) / (f_cur - f_old);
    f_new = subs(f, x, x_new);
    
    fprintf("Iteration %d : x = %f    f(x)  =  %f\n", i, x_new, f_new)
    i = i + 1;
    
    x_old = x_cur;
    f_old = f_cur;
    x_cur = x_new;
    f_cur = f_new;
end