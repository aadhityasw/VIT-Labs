#include<stdio.h>
#include<string.h>
int main()
{
	int i=1,j,n,a=10;
	char s[3];
	printf("Enter a number : \n");
	scanf("%d",&n);
	do
	{
		for(i;i<=a;i++)
		{
			printf("%d X %d = %d\n",n,i,(n*i));
		}
		printf("Do you want to continue\n");
		scanf("%s",&s);
		a=a+10;
	}while(!strcmp(s,"yes"));
}
