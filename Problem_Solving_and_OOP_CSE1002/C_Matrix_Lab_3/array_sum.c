#include<stdio.h>
int main()
{
	int n,i,sum=0;
	float avg=0.0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	avg=sum/n;
	printf("Sum = %d\nAverage = %f",sum,avg);
}
