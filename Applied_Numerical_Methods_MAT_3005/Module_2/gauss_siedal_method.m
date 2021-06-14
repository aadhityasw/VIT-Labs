%% Gauss Siedal Method

clc;
clear all;

%%

% Coefficient Matrix
% We will have to check and ensure that this is diagonally dominant
A = [28 4 -1 ; 2 17 4 ; 1 3 10];

% rhs values
b = [32 35 24]';

% initial assumed solution
x = [1 0 1]';

% Enter the accuracy needed
accuracy_decimal = 5;


%%

n = size(x,1);
normVal = Inf;

% We determine an epsilon value based on this input
% If we want n decimal place accuracy, we calculate (n+1) places in each
% step.
epsilon = 10 ^ (-1 * accuracy_decimal);

itr = 0;

%%

while (normVal > epsilon) && (itr < 20)
    x_old=x;
    
    for i=1:n
        
        sigma=0;
        
        for j=1:i-1
                sigma=sigma+A(i,j)*x(j);
        end
        
        for j=i+1:n
                sigma=sigma+A(i,j)*x_old(j);
        end
        
        x(i)=(1/A(i,i))*(b(i)-sigma);
    end
    
    itr=itr+1;
    fprintf("Iteration %d\n", itr)
    x
    
    % Calculation of error = abs((x_new - x_old)/(x_new))*100
    error = abs((x - x_old) ./ x) .* 100
    
    normVal = norm(x_old-x);
end