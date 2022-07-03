#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr,sum=0;
	printf("Enter the elements :-\n");
	scanf("%d",&n);
	ptr=(int*) malloc(n* sizeof(int));
	printf("Enter the elements :-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
		sum+=*(ptr+i);
	}
	printf("Sum=%d",sum);
	free(ptr);
}
