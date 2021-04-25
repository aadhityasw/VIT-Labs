%% Romberg's Method

% Here we use this along with trapezoidal method or the simpson's one third
% rule, so as to improve the accuracy

clc;
clear all;

% Declare x to be a symbolic variable
syms x;


%% Input Values

% Function
f = exp(-x^2);

% Lower Limit
a = 0;

% Upper Limit
b = 0.8;

% Choice of Integral rule
% 0 -> Trapezoidal Rule
% 1 -> Simpson's One Third Rule
choice = 0;

% Number of iterations
num_iterations = 2;

% Enter the initial h value
h = 0.2;


%% Initialization

% Find the total number of points in the table
n = ((b - a) / h) + 1;

% To store the integral values of every iteration
I = zeros(1, num_iterations);

% To store the h values through the iterations
h_values = zeros(1, num_iterations);


%% Computation

% Step 1

% Perform the iterations
for itr=1:num_iterations
    
    % To store the x values and its function values
    table = zeros(2, n);
    
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
    
    disp("---------------------------------------------------------------")
    fprintf("--------------------  Iteration %d -----------------\n\n", itr)
    fprintf("\nh = %f\n\n", h)
    % Print the function table
    disp("The function table : ")
    fprintf("x    : ")
    disp(table(1, :))
    fprintf("f(x) : ")
    disp(table(2, :))
    
    % Substitute in the equation
    if choice == 0
        % Trapezoidal Method
        
        % To store the terms in the equation
        terms = zeros(1, 2);
        
        % Compute the term values of the equation
        terms(1) = table(2, 1) + table(2, n);
        for i=2:n-1
            terms(2) = terms(2) + table(2, i);
        end
        
        % Display the equation
        disp("Equation : ")
        fprintf("I%d = (%f / 2) * [%f + (2 * %f)]\n", itr, h, terms(1), terms(2))
        
        % Substitute these term values in the equation to get the integral value
        I(itr) = (h / 2) * (terms(1) + (2 * terms(2)));
        
    elseif choice == 1
        % Simpson's One Third Rule
        
        % To store the terms in the equation
        terms = zeros(1, 3);
        
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
        
        disp("Equation : ")
        fprintf("I%d = (%f / 3) * [%f + (4 * %f) + (2 * %f)]\n", itr, h, terms(1), terms(2), terms(3))
        
        % Substitute these term values in the equation to get the integral value
        I(itr) = (h / 3) * (terms(1) + (4 * terms(2)) + (2 * terms(3)));
    end
    
    % Display the integral value of this iteration
    fprintf("Intergral Value I%d = %f\n", itr, I(itr))
    
    % Store the current h value
    h_values(itr) = h;
    
    % Update the h and n after every iteration
    h = h / 2;
    n = ((b - a) / h) + 1;
    %fprintf("n = %d\n", n)
end


% Step 2

disp("---------------------------------------------------------------")
disp("------------------------- Step 2 ------------------------------")

% Initialize the improvization table
improv_table = zeros(num_iterations - 1);

% Initialize the multiplier
if choice == 0
    % Trapezoidal Rule
    k = 4;
elseif choice == 1
    % Simpson's One Third Rule
    k = 4^2;
end

% First stage
for i=2:num_iterations
    improv_table(i-1,1) = (k*I(i) - I(i-1)) / (k - 1);
end
k = k * 4;

% Remaining stages
for j=2:num_iterations-1 
    for i=1:num_iterations-j
        improv_table(i,j)= (k*improv_table(i+1,j-1) - improv_table(i,j-1)) / (k - 1);
    end
    k = k * 4;
end

% Display this improv_table
disp("The table :")
fprintf("h\t\tI\t\tDifference values :\n\n")
for i=1:num_iterations
    fprintf("%f\t%f\t", h_values(i), I(i))
    if i < num_iterations
        disp(improv_table(i,:))
    else
        fprintf("\n")
    end
    
end

fprintf("\nThe final value of I = %f\n", improv_table(1, num_iterations-1))


%% Verification

% We verify this answer by performing a normal definite integral
% calculation.

I_verify = int(f, a, b);

fprintf("\n------------------  Verification  ---------------------------\n")
fprintf("Integration of the function f : ")
disp(int(f))
fprintf("The value of the Integral is : %f\n", I_verify)


%% References

% Extractinf numerator and denominator
% https://www.mathworks.com/help/symbolic/numden.html

% L Hopital's Rule
% https://www.mathworks.com/matlabcentral/answers/147210-creating-l-hopital-s-rule-without-the-limit-command

% Integration
% https://www.mathworks.com/help/symbolic/sym.int.html









