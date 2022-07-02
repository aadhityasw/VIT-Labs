#include<stdio.h>
int main()
{
	int n,m,i,ma=0,mb=0,j;
	scanf("%d %d",&m,&n);
	int arr[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
			if(arr[i][j]>ma)
			{
				mb=ma;
				ma=arr[i][j];
			}
			else if((arr[i][j]>mb)&&(arr[i][j]<ma))
			{
				mb=arr[i][j];
			}
		}
	}
	printf("Second largest number = %d",mb);
}
