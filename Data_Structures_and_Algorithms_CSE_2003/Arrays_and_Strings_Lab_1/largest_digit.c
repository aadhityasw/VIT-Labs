#include<stdio.h>
int main()
{
	int num;
	scanf("%d", &num);
	int a, n, ma;
	n = num;
	ma = num%10;
	while(n>0)
	{
		a = a%10;
		n = (int)(n/10);
		if (ma<a)
		{
			ma = a;
		}
	}
	char arr[10][20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	printf("%s", arr[ma]);
}
