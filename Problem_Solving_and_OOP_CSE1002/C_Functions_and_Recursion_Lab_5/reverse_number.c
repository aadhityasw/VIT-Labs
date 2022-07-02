#include<stdio.h>
int rev(int n)
{
	int a,b=0;
	while(n>0)
	{
		a=n%10;
		b=b*10+a;
		n=n/10;
		printf("%d",a);
	}
	printf("\n%d",b);
}
int main()
{
	int n;
	scanf("%d",&n);
	rev(n);
}
