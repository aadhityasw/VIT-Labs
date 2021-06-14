%% Newton's Divided Difference Differentiation Method

clc;
clear all;

% Declare x to be a symbolic variable
syms x;

%% Input Values

% Array of dependent and independent values
X = [0 2 3 4 7 9];
Y = [4 26 58 112 466 922];


%% Initialization

% The number of elements in X
n = length(X);

% Initialize the difference table. This contains only the differences.
% First difference in first columns and so on
d = zeros(n - 1);


%% Computation

% Store the first difference in the first column
for i=2:n
    d(i-1,1) = (Y(i) - Y(i-1)) / (X(i) - X(i-1));
end

% Store the remaining levels of differences
for j=2:n-1
    k = 1;
    for i=1:n-j
        d(i,j) = (d(i+1,j-1) - d(i,j-1)) / (X(k+j) - X(k));
        k = k + 1;
    end
end

% Use the formula and calculate the interpolated value

disp("The individual terms in the equation are : ")

f_x = Y(1);
disp("Term 1")
disp(f_x)

coeff = 1;
for i=1:n-1
    % Store the term added in this iteration
    coeff = expand(coeff * (x - X(i)));
    % Compute the term to add
    term = expand(coeff * d(1, i));
    % Find the sum
    f_x = expand(f_x + term);
    % Display the terms
    fprintf("Term %d : \n", i+1)
    disp(term)
end

% Calculate the diff_x and diff_2_x
% Find its first differential
d_f = diff(f_x);

% Find its second differential
d_2_f = diff(d_f);

% Solve the equation f'=0
x_edge = solve(d_f, x);

% Find the first edge value
f_x_edge_1 = subs(f_x, x, x_edge(1));

% Find the second edge value
f_x_edge_2 = subs(f_x, x, x_edge(2));


%% Results Display

disp("---------------------------------------------------------------")

% Display Difference Table
disp("The Difference Table")
d

% Display f(x)
disp("The function f(x) : ")
disp(f_x)

disp("The first differential f' : ")
disp(d_f)

disp("The Second differential f'' : ")
disp(d_2_f)

fprintf("\n\n\n\n")
disp("The edge values are : ")
disp(x_edge)

% Print these values
fprintf("f(%f) = %f\n", x_edge(1), f_x_edge_1)
fprintf("f(%f) = %f\n", x_edge(2), f_x_edge_2)


