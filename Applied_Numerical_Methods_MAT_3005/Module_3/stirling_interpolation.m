%% Stirling's Central Interpolation Method

clc;
clear all;

%% Input Values

% Array of dependent and independent values
% We will have to check and ensure that the interval of X is uniform
X = [20, 25, 30, 35, 40, 45];
Y = [14.035, 13.674, 13.257, 12.734, 12.089, 11.309];

% The x value whose corresponding function value needs to be interpolated
% We have to ensure that this x value falls nearly to the ,middle of
% the X values
x = 32;

%% Initialization

% The number of elements in X
num_elements = length(X);

% Find the center element
center = ceil(num_elements / 2);

% The interval between the independent values
h = X(2) - X(1);

% The 'n' value in the formula, calculated as 'x(1) + n*h = x'
n = (x - X(center)) / h;

% Initialize the difference table. This contains only the differences.
% First difference in first columns and so on
d = zeros(num_elements - 1);

% An Array to store the individual terms of the formula
terms = zeros(1, num_elements);

%% Computation

% Forming the Difference Table

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
s = Y(center);
c = center;
k = 1;
l = 1;
factorial_denominator = 1;
coeff1 = n;
coeff2 = n^2;
terms(1) = s;

for i=1:num_elements-1
    % Update the factorial Denominator
    factorial_denominator = factorial_denominator * i;
    
    % If we need to take in the average of two central values
    if mod(i, 2) ~= 0   
        c = c - 1;
        % Find the average of the central values
        t1 = (d(c, i) + d(c+1, i)) / 2;
        % Calculate the term
        terms(i+1) = coeff1 * t1 / factorial_denominator;
        % Update coeff1
        coeff1 = coeff1 * ((n^2) - (k^2));
        k = k + 1;
    % If we need to take in the central value
    else
        % Get the central element
        t2 = d(c, i);
        % Calculate the term
        terms(i+1) = coeff2 * t2 / factorial_denominator;
        % Update coeff2
        coeff2 = coeff2 * ((n^2) - (l^2));
        l = l + 1;
    end
    
    % Update the sum
    s = s + terms(i+1);
    
    % If the c value reaches zero, then exit
    if (c == 0) || ((c == 1) && (mod(i, 2) == 0))
        break
    end
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

% Display the terms in the formula
disp("Terms in the formula : ")
disp(terms)

% Display the final result
fprintf("f(%f) = %f\n", x, s)


