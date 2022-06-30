clc
clear all
a=input('Enter a matrix :- ');
[M D] = eig(a);
eq=isequal(a,a');
if(eq==0)
    D = inv(M)*a*M;
else
    D = M'*a*M;
end
display(D)
