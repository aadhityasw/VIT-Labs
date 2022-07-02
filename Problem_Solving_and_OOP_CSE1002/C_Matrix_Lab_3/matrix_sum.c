#include<stdio.h>
int main()
{
	int n,m,i,sum=0,j;
	float avg=0.0;
	scanf("%d %d",&m,&n);
	int arr[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
			sum+=arr[i][j];
		}
		
	}
	printf("Sum = %d",sum);
}
