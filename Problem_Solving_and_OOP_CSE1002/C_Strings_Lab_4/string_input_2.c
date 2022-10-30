#include<stdio.h>
int main()
{
    char s[10];
    scanf("%[^\n]",s);
    printf("%ld",sizeof(s));
}
