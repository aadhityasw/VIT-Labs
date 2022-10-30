#include<stdio.h>
int inac(int a[],int n,int i)
{
	if(i>n)
	{
		return(-1);
	}
	a[i]+=2;
	return(a[i]);
}
int main()
{
	int a[10],ret,i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	ret=inac(a,10,5);
	printf("%d\n",ret);
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
}
