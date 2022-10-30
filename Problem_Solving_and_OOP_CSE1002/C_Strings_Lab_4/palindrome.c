#include<stdio.h>
#include<string.h>
void main()
{
	char s[100];
	int a=0,i,j,f=0;
	scanf("%s",s);
	a=strlen(s);
	for(i=0,j=a-1;i<a;i++,j--)
	{
		if(s[i]!=s[j])
		{
			printf("not");
			f=11;
			break;
		}
	}
	if(f==0)
	{
		printf("Yes");
	}
}
