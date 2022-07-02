#include<stdio.h>
long fact(int n)
{
	if(n<=0)
	{
		return(1);
	}
	else
	{
		return(n*fact(n-1));
	}
}
int main()
{
	int n;
	long a;
	scanf("%d",&n);
	a=fact(n);
	printf("%ld",a);
}
