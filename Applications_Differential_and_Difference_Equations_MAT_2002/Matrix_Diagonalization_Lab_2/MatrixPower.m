clc
clear all
A = input('Enter a matrix :- ');
n = input('Enter the power to be raised :- ');
[M D] = eig(A);
eq = isequal(A,A');
if(eq==0)
    P = M*(D^n)*inv(M);
else
    P = M*(D^n)*M';
end
display(P)
