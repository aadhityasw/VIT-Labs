%% Iterative method

clc;
clear all;
syms x;

%%
% User Inputs

phi_x = (7 + log10(x)) / 2;

x_ini = 3.5;

accuracy_decimal = 5;


%%

% We would have to determine the interval 
% eg : I = [0, 1];

% We would have to determine phi(x) from the given f(x).
% If we are given a f(x)=0, we take an x to one side and the rest to the
% other side, like x = phi(x).
% eg : phi_x = 1 / ((x+1)^0.5);

% We differentiate the phi(x) function to see if it satisfies the condition
% The condition is that abs(diff_phi(x)) < 1 in the choosen interval
diff_phi_x = diff(phi_x)

% Note : The checking process is to be done manually.


%%

% For specfiing the end point, we need to mention the level of accuracy
% needed.
% eg : accuracy_decimal = 5;

% We determine an epsilon value based on this input

% If we want n decimal place accuracy, we calculate (n+1) places in each
% step.
epsilon = 10 ^ (-1 * accuracy_decimal);

%%

% We choose a starting point in the interval found above
x_val = inf;
x_new = x_ini;
i = 0;
fprintf('x %d is %f\n', i, x_new)

while (abs(x_new - x_val) > epsilon) && (i < 20)
    i = i + 1;
    x_val = x_new;
    x_new = subs(phi_x, x, x_val);
    fprintf('x %d is %f\n', i, x_new)
end