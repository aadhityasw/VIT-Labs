clc
clear all
syms x y c1 c2 t
A = input('Enter the function as a matrix :- ');
H = input('Enter the non-homogenous part :- ');
[M D] = eig(A);
c = [c1 c2];
G = inv(M)*H;
n = length(A);
for i=1:n
    U(i) = c(i)*exp(D(i,i)*t) + exp(D(i,i)*t)*int(G(i)*exp(-D(i,i)*t));
end
disp('The solution is :- ');
disp(simplify(M*transpose(U)))
