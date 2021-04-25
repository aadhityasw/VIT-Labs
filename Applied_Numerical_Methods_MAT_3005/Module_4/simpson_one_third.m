%% Simpson's One Third (1/3) Rule

% Here we use the principle behind finding area of parabola.

clc;
clear all;

% Declare x to be a symbolic variable
syms x;


%% Input Values

% Function
f = 1 / (1+x);

% Lower Limit
a = 2;

% Upper Limit
b = 10;

% Mention the number of parts to divide the range
% We have to ensure that this is a multiple of 2
num_parts = 8;


%% Initialization

% Calculate the h value
h = (b - a) / num_parts;

% Find the total number of points in the table
n = num_parts + 1;

% To store the x values and its function values
table = zeros(2, n);

% To store the terms in the equation
terms = zeros(1, 3);


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
% First term is the sum of first and last value (y_0 + y_n)
terms(1) = table(2, 1) + table(2, n);
% Second term is the sum of (y_1 + y_3 + ...) till less than y_n
for i=2:2:n
    if i == n
        break
    end
    terms(2) = terms(2) + table(2, i);
end
% Third term is the sum of (y_2 + y_4 + ...) till less than y_n
for i=3:2:n
    if i == n
        break
    end
    terms(3) = terms(3) + table(2, i);
end

% Substitute these term values in the equation to get the integral value
I = (h / 3) * (terms(1) + (4 * terms(2)) + (2 * terms(3)));


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
fprintf("I = (%f / 3) * [%f + (4 * %f) + (2 * %f)]\n", h, terms(1), terms(2), terms(3))

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


