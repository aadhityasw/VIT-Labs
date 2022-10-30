#include<stdio.h>
void main()
{
    int num1,num2;
    int divd,divs,rem;
    scanf("%d%d",&num1,&num2);
    divd=num1;
    divs=num2;
    for(rem=divd%divs;rem!=0;rem=divd%divs)
    {
        divd=divs;
        divs=rem;
    }
    printf("the %d",divs);
}
