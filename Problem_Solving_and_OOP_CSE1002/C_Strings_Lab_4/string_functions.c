#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[10];
    scanf("%s",s1);
    scanf("%s",s2);
    printf("%ld\n",strlen(s1));
    printf("%ld\n",strlen(s2));
    printf("%d\n",strcmp(s1,s2));
    printf("%s\n",strcat(s1,s2));
    printf("%s\n",s1);
    strcpy(s1,s2);
}
