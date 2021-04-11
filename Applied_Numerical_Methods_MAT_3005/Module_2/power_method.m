%% Power Method to find the Dominant Eigen value

clc;
clear all;

%%

% Coefficient Matrix
A = [-2 -3; 6 7];

% initial assumption
X_cur = [1 1]';

% Enter the accuracy needed
accuracy_decimal = 5;


%%

% We determine an epsilon value based on this input
% If we want n decimal place accuracy, we calculate (n+1) places in each
% step.
epsilon = 10 ^ (-1 * accuracy_decimal);

itr = 1;
n = size(X_cur, 1);
X_old = inf(n, 1);


%%

while (sum(abs(X_cur - X_old)) > epsilon) && (itr <= 20)
    
    fprintf("------- Iteration %d ---------\n", itr)
    
    X_old = X_cur;
    P = A * X_old
    
    max_val = max(abs(P));
    
    fprintf("max_val = %f\n", max_val)
    
    X_cur = P ./ max_val
    
    itr = itr + 1;
end









