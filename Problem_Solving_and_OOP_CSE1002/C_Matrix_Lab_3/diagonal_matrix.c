#include<stdio.h>
void main()
{
	int n,i,j,f=0;
	scanf("%d",&n);
	int l[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&l[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{		
			if(i==j)
			{
				if(l[i][j]!=1)
				{
					f=11;
					break;
				}
			}
			else
			{
				if(l[i][j]!=0)
				{
					f=11;
					break;
				}
			}
		}
		if(f==11)
		{
			break;
		}
	}
	if(f==0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}