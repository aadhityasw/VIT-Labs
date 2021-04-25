%% Trapezoidal Rule

% Here we use the principle behind finding area of trapezoids.

clc;
clear all;

% Declare x to be a symbolic variable
syms x;


%% Input Values

% Function
f = exp(-(x^2));

% Lower Limit
a = 0;

% Upper Limit
b = 1;

% Mention the number of parts to divide the range
num_parts = 4;


%% Initialization

% Calculate the h value
h = (b - a) / num_parts;

% Find the total number of points in the table
n = num_parts + 1;

% To store the x values and its function values
table = zeros(2, n);

% To store the terms in the equation
terms = zeros(1, 2);


%% Computation

% Compute and fill the table
for i=1:n
    % Compute the x value
    table(1, i) = a + ((i - 1) * h);
    
    % Find its corresponding function value
    [numerator, denominator] = numden(f);
    if (subs(denominator, x, table(1, i)) == 0) && (subs(numerator, x, table(1, i)) == 0)
        % L'Hopitals Rule
        while (subs(denominator, x, table(1, i)) == 0) && (subs(numerator, x, table(1, i)) == 0)
            numerator = diff(numerator,x);
            denominator = diff(denominator,x);
        end
        ftemp = numerator/denominator;
        table(2, i) = subs(ftemp, x, table(1, i));
    else
        table(2, i) = subs(f, x, table(1, i));
    end
end

% Compute the term values of the equation
terms(1) = table(2, 1) + table(2, n);
for i=2:n-1
    terms(2) = terms(2) + table(2, i);
end

% Substitute these term values in the equation to get the integral value
I = (h / 2) * (terms(1) + (2 * terms(2)));


%% Results Display

disp("---------------------------------------------------------------")

fprintf("\nh = %f\n\n", h)

disp("The function table : ")
fprintf("x    : ")
disp(table(1, :))
fprintf("f(x) : ")
disp(table(2, :))

disp("---------------------------------------------------------------")

disp("Equation : ")
fprintf("I = (%f / 2) * [%f + (2 * %f)]\n", h, terms(1), terms(2))

disp("---------------------------------------------------------------")

fprintf("Intergral Value I = %f\n", I)


%% Verification

% We verify this answer by performing a normal definite integral
% calculation.

I_verify = int(f, a, b);

fprintf("\n------------------  Verification  ---------------------------\n")
fprintf("Integration of the function f : ")
disp(int(f))
fprintf("The Actual value of the Integral is : %f\n", I_verify)


