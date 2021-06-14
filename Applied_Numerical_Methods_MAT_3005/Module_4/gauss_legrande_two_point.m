%% Gauss Lagrande's Two Point Formula

clc;
clear all;
syms x;

%% Input Values

% The function f(x), and the limits for integration
f_x = 5 * x * exp(-2*x);
a = 0.1;
b = 1.3;


%% Initialization

% Find the values of c1 and c2
c1 = (b - a) / 2;
c2 = (b - a) / 2;

% Calculate the values of x1 and x2
x1 = (-1 * (b - a) / (2 * sqrt(3))) + ((b + a) / 2);
x2 = ((b - a) / (2 * sqrt(3))) + ((b + a) / 2);


%% Computation

% Find the approximation based on the gauss lagrande formula
approx_value = (c1 * subs(f_x, x, x1)) + (c2 * subs(f_x, x, x2));

% Find the exact value by integration
integral = int(f_x);
exact_value = int(f_x, a, b);

% Calculate the relative error
relative_error = abs((exact_value - approx_value) / exact_value) * 100;


%% Display

disp("The function entered :")
disp(f_x)

fprintf("\n The limits of integration entered are %f, %f\n\n", a, b)

fprintf("c1 = %f\nc2 = %f\n\n", c1, c2);
fprintf("x1 = %f\nx2 = %f\n\n", x1, x2);

fprintf("Approximated value = %f\n\n", approx_value)

disp("Integrated function =")
disp(integral)
fprintf("Exact value = %f\n\n", exact_value)

fprintf("Relative Error = %f percent \n\n", relative_error)




