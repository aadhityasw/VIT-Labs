%% Adam Bashforth's Predictor Corrector Method

% To solve a 1st order Differential equation

clc;
clear all;

% Declare x and y to be a symbolic variable
syms x y;


%% Input Values

% Input the x and y values
X = [1 1.1 1.2 1.3 1.4 1.5];
Y = [1 0.996 0.986 0.972 0 0];
% Number of given values
n = 4;

% The function y'(x, y)
diff_y_x = (1 / x^2) - (y/x);


%% Initialization

% The number of elements in X
num_elements = length(X);

% To store the y' values
diff_Y = zeros(num_elements);

% Find the increment value
h = X(2) - X(1);


%% Computation

% Calculate the values of y'(x,y) for the given values
for i=1:n
    diff_Y(i) = subs(subs(diff_y_x, x, X(i)), y, Y(i));
end

% Find the remaining values of y
for i=n+1:num_elements
    % Use predictor formula
    Y(i) = Y(i-1) + (h/24) * ((55 * diff_Y(i-1)) - (59 * diff_Y(i-2)) + (37 * diff_Y(i-3)) - (9 * diff_Y(i-4)));
    fprintf("Y%d after applying predictor formula = %f\n", i, Y(i))
    
    % Find the y'(i) with this temporay value
    diff_Y(i) = subs(subs(diff_y_x, x, X(i)), y, Y(i));
    fprintf("Y'%d after applying predictor formula = %f\n", i, diff_Y(i))
    
    % Apply the corrector formula
    Y(i) = Y(i-1) + (h/24) * ((9 * diff_Y(i)) + (19 * diff_Y(i-1)) - (5 * diff_Y(i-2)) + diff_Y(i-3));
    fprintf("Y%d after applying corrector formula = %f\n", i, Y(i))
    
    % Find the y'(i)
    diff_Y(i) = subs(subs(diff_y_x, x, X(i)), y, Y(i));
    fprintf("Y'%d after applying corrector formula = %f\n", i, diff_Y(i))
    
    fprintf("\n\n\n")
end


















