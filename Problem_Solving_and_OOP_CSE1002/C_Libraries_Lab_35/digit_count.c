#include<stdio.h>
#include<ctype.h>
#define MAX 10
void main()
{
    int counter,num=0;
    char ch;
    for(counter=0;counter<MAX;counter++)
    {
        scanf("%c\n",&ch);
        if(isdigit(ch))
        {
            continue;
        }
        else
        {
            num++;
        }
    }
    printf("%d",num);
}
