#include<stdio.h>
void main()
{
	int a,c;
	c=a=4;
	c= ++a + ++a;
	printf("%d %d",c,a);
}
