%% Lagrange Interpolation Method

clc;
clear all;

% Declare x to be a variable to be used as is in code
syms x;

%% Input Values

% This is used to find a f(x) value when we are givan a table and a x value

% Array of dependent and independent values
% We will have to check and ensure that the interval of X is uniform
X = [5, 7, 11, 13, 17];
Y = [150, 392, 1452, 2366, 5202];

% The x value whose corresponding function value needs to be interpolated
x_query = 9;

%% Initialization

% The number of elements in X
n = length(X);

%% Computation

% Also displays the individual terms of the equation
disp("The individual terms of the equation are :")

% Find and add each term to form the f(x)
f_x = 0;
for i = 1:n
    p=1;
    for j=1:n
        if j~=i 
            c = expand((x-X(j))) / (X(i)-X(j)) ;
            p = expand(c * p);
        end
    end
    term = expand(Y(i) * p);
    f_x = expand(f_x + term);
    
    % Display the individual terms
    fprintf("Term %d\n", i)
    disp(term)
end

% Calculate the interpolated value of the query
f_x_query = subs(f_x, x, x_query);

%% Results Display

disp("--------------------------------------------")

% Display the function f(x)
disp("The function f(x) :")
disp(f_x)

% Display the interpolated value
fprintf("f(%f) = %f\n", x_query, f_x_query)


