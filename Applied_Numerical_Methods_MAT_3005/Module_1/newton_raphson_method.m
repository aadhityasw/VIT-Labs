%% Newton Raphson Method

clc;
clear all;
syms x;

%%

% enter f(x)=0
f = (x * tan(x)) + 1;

% enter the number of occurance of root to be found, (double root = 2),
% (triple root = 3), etc
m = 1;

% Enter the interval (closed) where the root is to be found
I = [2, 3];

% Enter the accuracy needed
accuracy_decimal = 5;


%%

% Details for convergence condition

diff_x = diff(f)
diff_2_x = diff(diff_x)

% The convergence condition is lhs < 1 in the choosen interval
% We will have to calculate the lhs and check the condition
% lhs = abs((subs(f, x, I(1)) * subs(diff_2_x, x, I(1))) / (subs(diff_x, x, I(1)) ^ 2))


% We determine an epsilon value based on this input
% If we want n decimal place accuracy, we calculate (n+1) places in each
% step.
epsilon = 10 ^ (-1 * accuracy_decimal);


%%

x_cur = I(1);
i = 0;
fprintf("Iteration %d   x = %f\n", i, x_cur)
i = i + 1;
x_old = inf;


while (abs(x_cur - x_old) > epsilon) && (i < 20)
    
    x_new = x_cur - (m * (subs(f, x, x_cur) / subs(diff_x, x, x_cur)));
    
    fprintf("Iteration %d   x = %f\n", i, x_new)
    i = i + 1;
    
    x_old = x_cur;
    x_cur = x_new;
end