#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],ab;
	int a=0,i,j,f=0;
	gets(s);
	a=strlen(s);
	ab=s[0];
	for(i=0;i<a-1;i++)
	{
		s[i]=s[i+1];
	}
	s[i]=ab;
	printf("%s",s);
}
