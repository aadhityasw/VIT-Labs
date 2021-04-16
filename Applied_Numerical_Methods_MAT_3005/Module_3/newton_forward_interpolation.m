%% Newton's Forward Interpolation Method

clc;
clear all;

%% Input Values

% Array of dependent and independent values
% We will have to check and ensure that the interval of X is uniform
X = [0, 1, 2, 3, 4, 5, 6];
Y = [176, 185, 194, 203, 212, 220, 229];

% The x value whose corresponding function value needs to be interpolated
% We have to ensure that this x value falls in the first half of the X
% values
x = 0.2;

%% Initialization

% The number of elements in X
num_elements = length(X);

% The interval between the independent values
h = X(2) - X(1);

% The 'n' value in the formula, calculated as 'x(1) + n*h = x'
n = (x - X(1)) / h;

% Initialize the difference table. This contains only the differences.
% First difference in first columns and so on
d = zeros(num_elements - 1);

% An Array to store the individual terms of the formula
coeff = zeros(1, num_elements);

%% Computation

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

% Use the formula and calculate the interpolated value
s = Y(1);
t = n;
coeff(1) = s;
for i=1:num_elements-1
    % Store the term added in this iteration
    coeff(i+1) = t * d(1,i);
    % Find the sum
    s = s + coeff(i+1);
    % Compute the next term's coefficient
    t = t * ((n - i) / (i + 1));
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
disp(n)

% Display the coefficients
disp("Terms in the formula : ")
disp(coeff)

% Display the final result
fprintf("f(%f) = %f\n", x, s)


