#include<stdio.h>
void call(int *a, int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	printf("After Swapping :- \na = %d\nb = %d\n",*a,*b);
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("Before Swapping :- \na= %d\nb= %d\n",a,b);
	call(&a,&b);
	printf("After Swap :- \na= %d\nb= %d\n",a,b);
}
