#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    int acc[20],t=0,num,c;
    float mean;
    scanf("%d",&num);
    for (c=0;c<num;c++)
    {
        scanf("%d",&acc[c]);
        t+=acc[c];
    }
    mean=t/(float)num;
    printf("%.2f\n",mean);
    for(c=0;c<num;c++)
    {
        printf("%.2f\n",fabsf(mean-acc[c]));
    }
}
