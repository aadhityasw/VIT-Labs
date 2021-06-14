%% Cubic Spline Interpolation Method
% @Author : Aadhitya Swarnesh

clc;
clear all;


%% Input Values

% Array of dependent and independent values
% We will have to check and ensure that the interval of X is uniform
X = [0 1 2 3];
Y = [1 2 33 244];

% Enter the values of x whose function value is needed to be found
% We would have to ensure that these values fall under the intervals of x
% in the previous array
x_query = [0.5];


%% Initialization

% Declare x to be a symbolic variable
syms x;

% The number of elements in X
n = length(X);

% The interval between the independent values
h = X(2) - X(1);

% To store the estimated d_2_f(x) values at the given x values
% ********** We assume the first and last values to be 0 ***********
M = zeros(1, n);

% 2D Array to store the coefficients of the LHS linear equations
A = zeros(n-2);

% An array to store the RHS values
B = zeros(n-2, 1);

% A 2D matrix to hold the coefficients of the functions.
% Each function will have a maximum order of x as 3.
% There will be a total of n-1 equations.
% Each row of this matrix will constitute a function.
function_coeffs = zeros(n-1, 4);

% Find the number of query items
query_count = length(x_query);

% An array to store the interpolated x_query values
y_query = zeros(1, query_count);

% An array to store the index of the function used to find the interpolated value
y_query_function_index = zeros(1, query_count);


%% Computation

% Loop for forming each equation, form the set of linear equations in this manner
for i=1:n-2
    % Store the appropriate coefficients in A
    if i == 1
        A(i, i) = 4;
        A(i, i+1) = 1;
        B(i) = -1 * M(1);
    elseif i == n-2
        A(i, i-1) = 1;
        A(i, i) = 4;
        B(i) = -1 * M(n);
    else
        A(i, i-1) = 1;
        A(i, i) = 4;
        A(i, i+1) = 1;
    end
    
    % Store the corresponding RHS values in B
    B(i) = B(i) + ((Y(i) - (2 * Y(i+1)) + Y(i+2)) * 6 / (h ^ 2));
end

% Solve the set of linear equations to get the M values
M(2:n-1) = linsolve(A,B);

% Find the equations of interpolation in each interval
for i=2:n
    % Use the formula
    f = expand(((-1 * ((x - X(i)) ^ 3) * M(i-1)) + (((x - X(i-1)) ^ 3) * M(i))) / 6);
    f = expand(f - ((x - X(i)) * (Y(i-1) - (M(i-1) / 6))));
    f = expand(f + ((x - X(i-1)) * (Y(i) - (M(i) / 6))));
    
    % Convert it into a vector to store
    s_coeffs = sym2poly(f);
    % Store this function's coefficients into the matrix
    function_coeffs(i-1, 1:4) = s_coeffs;
end

% Compute the interpolated values for the query
for i=1:query_count
    if x_query(i) < X(1) || x_query(i) > X(n)
        continue
    else
        % Find the interval that the current query value belongs to
        for j=1:n
            if x_query(i) < X(j)
                break
            end
        end
        
        % Assemble the corresponding function
        f = poly2sym(function_coeffs(j-1, 1:4), x);
        % Substitute the current query and find the interpolated value
        y_query(i) = subs(f, x, x_query(i));
        % Store the index of the function used here
        y_query_function_index(i) = j-1;
    end
end


%% Results Display

% Display the double differentials
disp("The system of linear equations formed is :")
for i=1:n-2
    fprintf("Equation %d : \n", i)
    for j=1:n-2
        if A(i, j) ~= 0
            fprintf("%d M%d ", A(i, j), j)
        end
        if j < n-2
            fprintf(" + ")
        end
    end
    fprintf(" = %f\n", B(i))
end

disp("-------------------------------------------------------------------")

% Dislay the solution to the system of linear equations
disp("The solution to the above system of equations :")
for i=1:n
    fprintf("M%d = %f\n", i-1, M(i))
end

disp("-------------------------------------------------------------------")

% Display the cubic spline system of functions
disp("The functions are :")
for i=1:n-1
    fprintf("Function %d -- \n", i)
    fprintf("Interval [%f %f]\n", X(i), X(i+1))
    % Assemble the corresponding function
    f = poly2sym(function_coeffs(i, 1:4), x);
    % Display the polynomial
    disp(f)
end

disp("-------------------------------------------------------------------")

% Display the results of the interpolation for the query elements
disp("The interpolation of the query : ")
for i=1:query_count
    fprintf("S%d(%f) = %f\n", y_query_function_index(i), x_query(i), y_query(i))
end


%% References

% Declaring syms
% https://in.mathworks.com/help/symbolic/sym.html#:~:text=nM%5D)%20%2C%20the%20sym%20function,a3%20in%20the%20MATLAB%20workspace.
% Solving Polynomial
% https://in.mathworks.com/help/symbolic/solve-a-system-of-linear-equations.html#:~:text=syms%20x%20y%20z%20eqn1%20%3D%202*x,independent%20variables%20in%20the%20equations.&text=Use%20linsolve%20to%20solve%20AX,the%20vector%20of%20unknowns%20X%20.
% poly2sym
% https://in.mathworks.com/help/symbolic/poly2sym.html
% sym2poly
% https://in.mathworks.com/help/symbolic/sym2poly.html


