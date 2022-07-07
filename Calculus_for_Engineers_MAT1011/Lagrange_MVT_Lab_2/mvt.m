clc;
syms x c;
f=input('Enter the function: ');
I=input('Enter the interval [a,b]: '); 
df=diff(f,x);
dfc=subs(df,x,c); rhs=((subs(f,x,I(2)))-(subs(f,x,I(1))))/(I(2)-I(1)); 
c=double(solve(dfc-rhs)); 
index=find(c>I(1)&c<I(2));
c=c(index);
for i=1:numel(c)
    disp(['The value of c is: ',num2str(c(i))]) 
    fc=double(subs(f,c(i))); 
    m=double(subs(df,c(i))); 
    b=double(subs(f,c(i))-subs(df,c(i))*c(i)); 
    tangent=m*x+c;
    disp('Tangent line is: '); disp(vpa(tangent,4));
    figure
    h=ezplot(tangent); set(h,'Color','black','LineWidth',1.5); 
    hold on;
    h=ezplot(f,[I(1) I(2)]);
    set(h,'Color','red','LineWidth',1.5);
    plot([I(1) I(2)],[double(subs(f,I(1))) double(subs(f,I(2)))],'--g','LineWidth',1,5); plot(c(i),fc,'o','MarkerEdgeColor','Blue','MarkerEdgeColor','blue'); 
    str=strcat('(',num2str(c(i)),',',num2str(fc),')');
    hold off;
    legend('Function','Tangent Line','Secant line',str,'Location','Best');
end 
title('Mean Value Theorem');
