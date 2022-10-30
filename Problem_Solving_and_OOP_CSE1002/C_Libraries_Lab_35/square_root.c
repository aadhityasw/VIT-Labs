#include<stdio.h>
#include<math.h>
void main()
{
    int num=0,counter;
    double root;
    for(counter=0;counter<10;counter++)
    {
        scanf("%d",&num);
        if(num<0)
        {
            printf("Negative not allowed");
            break;
        }
        else
        {
            root=sqrt(num);
            printf("%.2f\n",root);
        }
    }
}
