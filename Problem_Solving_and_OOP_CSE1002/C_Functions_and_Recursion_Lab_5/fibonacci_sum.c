#include<stdio.h>
int fibo(int n)
{
	if(n<=0)
	{
		return(1);
	}
	else
	{
		int c = fibo(n-1)+fibo(n-2);
		return(c);
	}
}
int main()
{
	int n,a=0;
	scanf("%d",&n);
	a=fibo(n);
	printf("%d\n",a);
}
