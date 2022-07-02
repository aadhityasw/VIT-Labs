#include<stdio.h>
int fibo(int a,int b,int n)
{
	if(b>=n)
	{
		return(0);
	}
	else
	{
		int c = a+b;
		a=b;
		b=c;
		printf("%d\n",b);
		fibo(a,b,n);
	}
}
int main()
{
	int n,a=0,b=1;
	scanf("%d",&n);
	printf("%d\n%d\n",a,b);
	fibo(a,b,n);
}
