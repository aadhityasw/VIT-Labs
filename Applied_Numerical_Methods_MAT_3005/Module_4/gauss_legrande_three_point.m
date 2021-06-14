%% Gauss Lagrande's Three Point Formula

clc;
clear all;
syms x;

%% Input Values

% The function f(x), and the limits for integration
f_x = 1 + (x ^ 4);
a = 2;
b = 4;


%% Initialization

% Find the values of c1, c2 and c3
c1 = (5/9) * ((b - a) / 2);
c2 = (8/9) * ((b - a) / 2);
c3 = (5/9) * ((b - a) / 2);

% Calculate the values of x1 and x2
x1 = (-1 * (b - a) * sqrt(3) / (2 * sqrt(5))) + ((b + a) / 2);
x2 = (b + a) / 2;
x3 = ((b - a) * sqrt(3) / (2 * sqrt(5))) + ((b + a) / 2);


%% Computation

% Find the approximation based on the gauss lagrande formula
approx_value = (c1 * subs(f_x, x, x1)) + (c2 * subs(f_x, x, x2)) + (c3 * subs(f_x, x, x3));

% Find the exact value by integration
integral = int(f_x);
exact_value = int(f_x, a, b);

% Calculate the relative error
relative_error = abs((exact_value - approx_value) / exact_value) * 100;


%% Display

disp("The function entered :")
disp(f_x)

fprintf("\n The limits of integration entered are %f, %f\n\n", a, b)

fprintf("c1 = %f\nc2 = %f\nc3 = %f\n\n", c1, c2, c3);
fprintf("x1 = %f\nx2 = %f\nx3 = %f\n\n", x1, x2, x3);

fprintf("Approximated value = %f\n\n", approx_value)

disp("Integrated function =")
disp(integral)
fprintf("Exact value = %f\n\n", exact_value)

fprintf("Relative Error = %f percent \n\n", relative_error)




