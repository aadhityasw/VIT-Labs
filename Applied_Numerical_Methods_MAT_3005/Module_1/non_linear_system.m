%% Newton's Method for solving system of equation

clc;
clear all;
syms x y z;

%% Input

% Enter the functions
f_x = [x^2+y^2-1.12 ; x*y-0.23]

% Enter the initial values
x_ini = [0 ; 1];


%% Initialization

% Form the Jacobian Matrix
J_x = jacobian(f_x, [x, y])

% Find inverse of the jacobian
J_inverse_x = inv(J_x)

% Store the x current
x_cur = transpose(x_ini)


%% Computation

% Go till 5 iterations
for i=1:5
    fprintf("Iteration %d : \n", i)
    J_inv_sub = vpa(subs(J_inverse_x, [x, y], x_cur))
    f_sub = vpa(subs(f_x, [x, y], x_cur))
    x_next = x_cur - transpose(J_inv_sub * f_sub)
    x_cur = x_next;
    fprintf("\n\n")
end











