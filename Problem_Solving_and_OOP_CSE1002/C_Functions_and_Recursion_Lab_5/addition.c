#include<stdio.h>
float sum(int a,float b)
{
	a=a+10;	
	return(a+b);
}
int main()
{
	int a;
	float b,c;
	scanf("%d%f",&a,&b);
	c=sum(a,b);
	printf("%d\n%f\n%f\n",a,b,c);
}
