#include<stdio.h>
int main()
{
	char c;
	int n;
	scanf("%c %d",&c,&n);
	int i,j,k,l;
	for(i=1;i<=n;i++)
	{
		for(j=n-i;j>0;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%c",c);
		}
		for(l=1;l<i;l++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
	for(i=1;i<=n-1;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf(" ");
		}
		for(j=n-i;j>0;j--)
		{
			printf("%c",c);
		}
		for(j=n-i;j>1;j--)
		{
			printf("%c",c);
		}
		printf("\n");
	}
}
