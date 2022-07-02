#include<stdio.h>
int fact(int n)
{
	int i,a=1;
	for(i=2;i<=n;i++)
	{
		a*=i;
	}
	return(a);
}
int main()
{
	int n,r;
	scanf("%d %d",&n,&r);
	float ans=fact(n)/(fact(n-r)*fact(r));
	printf("%f",ans);
}
