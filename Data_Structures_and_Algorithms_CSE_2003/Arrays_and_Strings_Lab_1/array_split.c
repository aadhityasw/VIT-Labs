#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of numbers : ");
	scanf("%d", &n);
	int arr[n];
	int i;
	for(i = 0;i <n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int odd[int(n/2)+1];
	int even[int(n/2)+1];
	int o=0, e=0;
	for(int i=0; i<n;i++)
	{
		if(i%2 ==0)
		{
			odd[o] = arr[i];
			o++;
		}
		else
		{
			even[e] = arr[i];
			e++;
		}
	}
	printf("Odd Array : ");
	for(int i=0;i<o;i++)
	{
		printf("%d ", odd[i]);
	}
	printf("\n\n");
	printf("Even Array : ");
	for(int i=0;i<e;i++)
	{
		printf("%d ", even[i]);
	}
}
