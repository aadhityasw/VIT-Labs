%% Thomas Method for Tri-diagonal System

clc;
clear all;

%%

% Coefficient Matrix
A = [2 -1 0 0 ; -1 2 -1 0 ; 0 -1 2 -1 ; 0 0 -1 2];

% rhs
r = [1 0 0 1]';


%%
% Initialization

% Step 1

% Size of the coefficient matrix
n = length(r);

% Diagonal Elements
d = diag(A);
disp("d = ")
disp(d')

% Upper Diagonal Elements
a = zeros(n,1);
a(1:end-1) = diag(A,+1);
disp("a = ")
disp(a')

% Lower Diagonal Elements
b = zeros(n,1);
b(2:end) = diag(A,-1);
disp("b = ")
disp(b')

% the final x values
x = zeros(n,1);


%%

% Forward Elimination

% Step 2

fprintf("Step 2 :\n")

a_old = a(1);
a(1) = a(1) / d(1);
fprintf("a1 = %f / %f = %f\n", a_old, d(1), a(1))

r_old = r(1);
r(1) = r(1) / d(1);
fprintf("r1 = %f / %f = %f\n\n", r_old, d(1), r(1))


% Step 3

fprintf("Step 3 :\n")

for i = 2:n
    a_old = a(i);
    a(i) = a(i) / (d(i) - (b(i) * a(i-1)));
    fprintf("a%d = (%f / (%f - (%f * %f))) = %f \n", i, a_old, d(i), b(i), a(i-1), a(i))

    r_old = r(i);
    r(i) = (r(i) - (b(i) * r(i-1))) / (d(i) - (b(i) * a(i-1)));
    fprintf("r%d = ((%f - (%f * %f)) / (%f - (%f * %f))) = %f \n\n", i, r_old, b(i), r(i-1), d(i), b(i), a(i-1), r(i))
end


%%

% Backward Substitution

% Step 4

fprintf("Step 4 :\n")

x(n) = r(n);
fprintf("x%d = %f\n", n, x(n))

for i = n-1:-1:1
    x(i) = r(i) - (a(i) * x(i+1));
    fprintf("x%d = (%f - (%f * %f)) = %f\n", i, r(i), a(i), x(i+1), x(i))
end

fprintf("\nFinal Solution :\n")
disp("X = ")
disp(x')