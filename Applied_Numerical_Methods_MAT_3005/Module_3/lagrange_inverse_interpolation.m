%% Lagrange Inverse Interpolation Method

clc;
clear all;

% Declare y to be a variable to be used as is in code
syms y;

%% Input Values

% This is used to find the corresponding x value when we are givan a table and a f(x) value

% Array of dependent and independent values
% We will have to check and ensure that the interval of X is uniform
X = [1, 2, 4, 5, 8];
Y = [1, 0.5, 0.25, 0.2, 0.125];

% The f(x) value whose corresponding x value needs to be interpolated
y_query = 0.143;

%% Initialization

% The number of elements in X
n = length(X);

%% Computation

% Also displays the individual terms of the equation
disp("The individual terms of the equation are :")

% Find and add each term to form the f(x)
f_y = 0;
for i = 1:n
    p=1;
    for j=1:n
        if j~=i 
            c = expand((y-Y(j))) / (Y(i)-Y(j)) ;
            p = expand(c * p);
        end
    end
    term = expand(X(i) * p);
    f_y = expand(f_y + term);
    
    % Display the individual terms
    fprintf("Term %d\n", i)
    disp(term)
end

% Calculate the interpolated value of the query
f_y_query = subs(f_y, y, y_query);

%% Results Display

disp("--------------------------------------------")

% Display the function f(y)
disp("The function f(y) :")
disp(f_y)

% Display the interpolated value
fprintf("f(%f) = %f\n", y_query, f_y_query)


