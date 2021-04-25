%% Runge Kutta 4 -- (RK4)

% Used to solve a system of differential equations
% Given a dy/dx and a dz/dx function and a x0 and y0 value, finds the integral value at
% any point

clc;
clear all;

% Declare x, y and z to be a symbolic variable
syms x y z;


%% Input Values

% Function f(x, y, z)
diff_f = x + z;

% Function g(x, y, z)
diff_g = x - y;

% Enter the h value
h = 0.1;

% Enter the x0 value
x0 = 0;

% Enter its corresponding f value
y0 = 0;

% Enter its corresponding g value
z0 = 1;

% Enter the x_query value
x_query = 0.2;


%% Initialization

% Keep track of the iterations
iter = 1;

% Store the x0, y0 and z0 in temporary variables
x_cur = x0;
y_cur = y0;
z_cur = z0;


%% Computation

while x_cur < x_query && iter < 5
    fprintf("\n---------------------- Iteration %d ----------------------\n", iter)
    
    % Find k1
    t = subs(diff_f, {x, y, z}, {x_cur, y_cur, z_cur});
    k1 = h * t;
    fprintf("k1 = f(%f, %f, %f)\n", x_cur, y_cur, z_cur)
    fprintf("k1 = %f * %f  =  %f\n\n", h, t, k1)
    
    % Find l1
    t = subs(diff_g, {x, y, z}, {x_cur, y_cur, z_cur});
    l1 = h * t;
    fprintf("l1 = g(%f, %f, %f)\n", x_cur, y_cur, z_cur)
    fprintf("l1 = %f * %f  =  %f\n\n\n", h, t, l1)
    
    % Find k2
    t = subs(diff_f, {x, y, z}, {(x_cur + (h/2)), (y_cur + (k1/2)), (z_cur + (l1/2))});
    k2 = h * t;
    fprintf("k2 = f(%f, %f, %f)\n", (x_cur + (h/2)), (y_cur + (k1/2)), (z_cur + (l1/2)))
    fprintf("k2 = %f * %f  =  %f\n\n", h, t, k2)
    
    % Find l2
    t = subs(diff_g, {x, y, z}, {(x_cur + (h/2)), (y_cur + (k1/2)), (z_cur + (l1/2))});
    l2 = h * t;
    fprintf("l2 = g(%f, %f, %f)\n", (x_cur + (h/2)), (y_cur + (k1/2)), (z_cur + (l1/2)))
    fprintf("l2 = %f * %f  =  %f\n\n\n", h, t, l2)
    
    % Find k3
    t = subs(diff_f, {x, y, z}, {(x_cur + (h/2)), (y_cur + (k2/2)), (z_cur + (l2/2))});
    k3 = h * t;
    fprintf("k3 = f(%f, %f, %f)\n", (x_cur + (h/2)), (y_cur + (k2/2)), (z_cur + (l2/2)))
    fprintf("k3 = %f * %f  =  %f\n\n", h, t, k3)
    
    % Find l3
    t = subs(diff_g, {x, y, z}, {(x_cur + (h/2)), (y_cur + (k2/2)), (z_cur + (l2/2))});
    l3 = h * t;
    fprintf("l3 = g(%f, %f, %f)\n", (x_cur + (h/2)), (y_cur + (k2/2)), (z_cur + (l2/2)))
    fprintf("l3 = %f * %f  =  %f\n\n\n", h, t, l3)
    
    % Find k4
    t = subs(diff_f, {x, y, z}, {(x_cur + h), (y_cur + k3), (z_cur + l3)});
    k4 = h * t;
    fprintf("k4 = f(%f, %f, %f)\n", (x_cur + h), (y_cur + k3), (z_cur + l3))
    fprintf("k4 = %f * %f  =  %f\n\n", h, t, k4)
    
    % Find l4
    t = subs(diff_g, {x, y, z}, {(x_cur + h), (y_cur + k3), (z_cur + l3)});
    l4 = h * t;
    fprintf("l4 = g(%f, %f, %f)\n", (x_cur + h), (y_cur + k3), (z_cur + l3))
    fprintf("l4 = %f * %f  =  %f\n\n", h, t, l4)
    
    
    % Find k
    k = (1/6) * (k1 + 2*k2 + 2*k3 + k4);
    fprintf("k = (1/6) * (%f + 2* %f + 2* %f + %f)  =  %f\n\n", k1, k2, k3, k4, k)
    
    % Find l
    l = (1/6) * (l1 + 2*l2 + 2*l3 + l4);
    fprintf("l = (1/6) * (%f + 2* %f + 2* %f + %f)  =  %f\n\n", l1, l2, l3, l4, l)
    
    
    % Update the x, y and z current
    x_cur = x_cur + h;
    y_cur = y_cur + k;
    z_cur = z_cur + l;
    fprintf("x%d = %f\n", iter, x_cur)
    fprintf("y%d = %f\n", iter, y_cur)
    fprintf("z%d = %f\n\n\n", iter, z_cur)
    
    % Increment the iteration tracker
    iter = iter + 1;
end












