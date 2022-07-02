#include<stdio.h>
#include<String.h>
int main()
{
	char s1[100],s2[100],s3[100];
	printf("Enter two strings :- \n");
	scanf("%[^\n]s",s1);
	fflush(stdin);
	scanf("%[^\n]s",s2);
	printf("%d %d\n", strlen(s1),strlen(s2));
	strcat(s1," ");
	strcat(s1,s2);
	strcpy(s3,s1);
	printf("Concatenated String : %s",s3);
}
