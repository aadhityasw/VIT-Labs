#include<stdio.h>
int a,b;
void call()
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After Swapping :- \na = %d\nb = %d\n",a,b);
}
int main()
{
	scanf("%d %d",&a,&b);
	printf("Before Swap :- \na= %d\nb= %d\n",a,b);
	call();
	printf("After Swap :- \na= %d\nb= %d\n",a,b);
}
