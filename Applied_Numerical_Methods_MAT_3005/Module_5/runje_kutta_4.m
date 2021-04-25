%% Runge Kutta 4 -- (RK4)

% Given a dy/dx function and a x0 and y0 value, finds the integral value at
% any point

clc;
clear all;

% Declare x and y to be a symbolic variable
syms x y;


%% Input Values

% Function
diff_f = x + (x^2)*y;

% Enter the h value
h = 0.1;

% Enter the x0 value
x0 = 0;

% Enter its corresponding function value
y0 = 1;

% Enter the x_query value
x_query = 0.2;


%% Initialization

% Keep track of the iterations
iter = 1;

% Store the x0 and y0 in temporary variables
x_cur = x0;
y_cur = y0;


%% Computation

while x_cur < x_query && iter < 5
    fprintf("\n---------------------- Iteration %d ----------------------\n", iter)
    
    % Find k1
    t = subs(diff_f, {x, y}, {x_cur, y_cur});
    k1 = h * t;
    fprintf("k1 = f(%f, %f)\n", x_cur, y_cur)
    fprintf("k1 = %f * %f  =  %f\n\n", h, t, k1)
    
    % Find k2
    t = subs(diff_f, {x, y}, {(x_cur + (h/2)), (y_cur + (k1/2))});
    k2 = h * t;
    fprintf("k2 = f(%f, %f)\n", (x_cur + (h/2)), (y_cur + (k1/2)))
    fprintf("k2 = %f * %f  =  %f\n\n", h, t, k2)
    
    % Find k3
    t = subs(diff_f, {x, y}, {(x_cur + (h/2)), (y_cur + (k2/2))});
    k3 = h * t;
    fprintf("k3 = f(%f, %f)\n", (x_cur + (h/2)), (y_cur + (k2/2)))
    fprintf("k3 = %f * %f  =  %f\n\n", h, t, k3)
    
    % Find k4
    t = subs(diff_f, {x, y}, {(x_cur + h), (y_cur + k3)});
    k4 = h * t;
    fprintf("k4 = f(%f, %f)\n", (x_cur + h), (y_cur + k3))
    fprintf("k4 = %f * %f  =  %f\n\n", h, t, k4)
    
    % Find k
    k = (1/6) * (k1 + 2*k2 + 2*k3 + k4);
    fprintf("k = (1/6) * (%f + 2* %f + 2* %f + %f)  =  %f\n\n", k1, k2, k3, k4, k)
    
    % Update the x and y current
    x_cur = x_cur + h;
    y_cur = y_cur + k;
    fprintf("x%d = %f\n", iter, x_cur)
    fprintf("y%d = %f\n\n\n", iter, y_cur)
    
    % Increment the iteration tracker
    iter = iter + 1;
end



