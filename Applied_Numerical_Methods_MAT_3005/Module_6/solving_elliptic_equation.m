%% Solving Lagrange's Equation

clc;
clear all;


%% Input

% Input the matrix after finding all the initial values
grid = [0 1 4 9 16; 0 2.125 4.9375 9.125 14; 0 2.0625 4.5 8.0625 12; 0 1.625 3.6875 6.625 10; 0 0.5 2 4.5 8];

% Enter the grid size
n = 5;

% Enter the number of iterations needed
num_iter = 3;


%% Computation

% Perform the iterations
for iter=1:num_iter
    fprintf("Iteration %d : \n", iter)
    for i=2:n-1
        for j=2:n-1
            % Use Standard Five Point Formula (SFPF)
            grid(i, j) = (grid(i-1, j) + grid(i, j-1) + grid(i, j+1) + grid(i+1, j)) / 4;
        end
    end
    disp(grid)
end






