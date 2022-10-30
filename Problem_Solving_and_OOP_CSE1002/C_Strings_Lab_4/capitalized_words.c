#include<stdio.h>
#include<string.h>
void main()
{
	char s[100];
	int a=0,i,j,f=0;
	scanf("%[^\n]s",s);
	a=strlen(s);
	if((s[0]>=65)&&(s[0]<91))
	{
		f++;
	}
	for(i=0;i<a-1;i++)
	{
		if(s[i]==' ')
		{
			if((s[i+1]>=65)&&(s[i+1]<91))
			{
				f++;
			}
		}
	}
	printf("%d",f);
}
