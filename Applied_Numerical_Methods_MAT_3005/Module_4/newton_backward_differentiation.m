%% Newton's Backward Differentiation Method

clc;
clear all;
syms n;

%% Input Values

% Array of dependent and independent values
% We will have to check and ensure that the interval of X is uniform
X = [0 0.2 0.4 0.6 0.8 1];
Y = [0 0.12 0.49 1.2 2.02 3.2]

% The x value whose corresponding function value needs to be interpolated
% We have to ensure that this x value falls in the later half of the X
% values
x = 0.6;

%% Initialization

% The number of elements in X
num_elements = length(X);

% The interval between the independent values
h = X(2) - X(1);

% The 'n' value in the formula, calculated as 'x(1) + n*h = x'
n_val = (x - X(num_elements)) / h;

% Initialize the difference table. This contains only the differences.
% First difference in first columns and so on
d = zeros(num_elements - 1);

%% Computation

% We will be forming a Forward difference table and then taking the last
% elements this time instead of the first elements as in the case of
% forward interpolation.

% Store the first difference in the first column
for i=2:num_elements
    d(i-1,1)=Y(i)-Y(i-1);
end

% Store the remaining levels of differences
for j=2:num_elements-1
    for i=1:num_elements-j
        d(i,j)= d(i+1,j-1)-d(i,j-1);
    end
end

disp("Terms in the formula : ")
% Use the formula and calculate the interpolated value
s = Y(num_elements);
t = expand(n);
disp(s)
for i=1:num_elements-1
    % Store the term added in this iteration
    disp(expand(t * d(num_elements-i,i)));
    % Find the sum
    s = expand(s + expand(t * d(num_elements-i,i)));
    % Compute the next term's coefficient
    t = expand(t * ((n + i) / (i + 1)));
end

%% Results Display

% Display Difference Table
disp("The Difference Table")
d

% Display the h value
disp("h = ")
disp(h)

% Display the n value
disp("n = ")
disp(n_val)

% Find its first differential
d_f = expand(diff(s, n) / h);
disp("The first differential f' : ")
disp(d_f)

% Find its second differential
d_2_f = expand(diff(d_f, n) / h);
disp("The Second differential f'' : ")
disp(d_2_f)

% Display the values
fprintf("f(%f) = %f\n", x, subs(s, n, n_val))
fprintf("f'(%f) = %f\n", x, subs(d_f, n, n_val))
fprintf("f''(%f) = %f\n", x, subs(d_2_f, n, n_val))

% Solve the equation f'=0
n_edge = solve(d_f, n);

fprintf("\n\n\n\n")
disp("The edge values are : ")
disp(n_edge)

% Find the first edge value
x_edge_1 = (n_edge(1) * h) + X(num_elements);
f_x_edge_1 = subs(s, n, n_edge(1));
% Print these values
fprintf("n = %f ;  f(%f) = %f\n", n_edge(1), x_edge_1, f_x_edge_1)

% Find the second edge value
x_edge_2 = (n_edge(2) * h) + X(num_elements);
f_x_edge_2 = subs(s, n, n_edge(2));
% Print these values
fprintf("n = %f ;  f(%f) = %f\n", n_edge(2), x_edge_2, f_x_edge_2)


















