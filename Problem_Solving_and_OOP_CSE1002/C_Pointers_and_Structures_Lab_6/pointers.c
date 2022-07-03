#include<stdio.h>
int main()
{
	int a, *p;
	a=5;
	p=&a;
	printf("Value is :- %d or %d\n",a,*p);
	printf("Address is :- %x or %x",&a,p);
	//As address is in the form of hexadecimal
}
