clc
clear all
A = input('Enter a matrix :- ');
[M D] = eig(A);
n = size(A);
O = zeros(n);
AP = D * M'
if(n==2)
    quiver(O(:,1),O(:,2),A(:,1),A(:,2))
    pause
    hold on
    quiver(O(:,1),O(:,2),AP(:,1),AP(:,2))
elseif(n==3)
    quiver3(O(:,1),O(:,2),O(:,3),A(:,1),A(:,2),A(:,3))
    pause
    hold on
    quiver3(O(:,1),O(:,2),O(:,3),AP(:,1),AP(:,2),AP(:,3))
end
