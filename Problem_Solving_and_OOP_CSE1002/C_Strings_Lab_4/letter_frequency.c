#include<stdio.h>
#include<String.h>
int main()
{
	char c[100],ch;
	scanf("%[^\n]s\n",c);
	fflush(stdin);
	scanf("%c",&ch);
	int i,f=0;
	int no=strlen(c);
	printf("%d\n",no);
	for(i=0;i<no;i++)
	{
		if(ch==c[i])
		{
			f++;
		}
	}
	printf("%d",f);
}
