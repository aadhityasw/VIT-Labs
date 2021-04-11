%% LU Decomposition Method

clc;
clear all;

%%

% Coefficient Matrix
% We will have to check and ensure that its leading sub-matrices have
% non-zero determinant.
% In the current code, as we do not find L and U automaticall, this is not
% needed.
% A = [1 1 1; 4 3 -1; 3 5 3];

% Enter L and U
L = [1 0 0; 4 1 0; 3 -2 1];
U = [1 1 1; 0 -1 -5; 0 0 -10];

% rhs values
b = [1 6 4]';


%%

% To find L inverse
L_inv = inv(L)

% Solve Lz = b
Z = L_inv * b

% To find U inverse
U_inv = inv(U)

% Solve UX = z
X = U_inv * Z