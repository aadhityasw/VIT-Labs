#include<stdio.h>
typedef struct consumer
{
	int cid,cmr,pmr,tuc;
	float bill;
	char name[20];
}con;
con computereading(con a)
{
	a.tuc=a.cmr-a.pmr;
	return(a);
}
con computebill(con a)
{
	if(a.tuc<=50)
	{
		a.bill=a.tuc*1.25;
	}
	else if(a.tuc<=100)
	{
		a.bill=(1.25*50)+(a.tuc-50)*1.5;
	}
	else if(a.tuc<=150)
	{
		a.bill=(1.25*50)+(1.5*50)+(a.tuc-100)*1.75;
	}
	else
	{
		a.bill=(1.25*50)+(1.5*50)+(1.75*50)+(a.tuc-100)*2.0;
	}
	return(a);
}
void putdata(con c)
{
	printf("The details of the %d consumer :-\n");
	printf("Consumer id :-\t%d\n",c.cid);
	printf("Name :-\t%s\n",c.name);
	printf("Primary meter reading :-\t%d\n",c.pmr);
	printf("Current meter reading :-\t%d\n",c.cmr);
	printf("Total units used :-\t%d\n",c.tuc);
	printf("Bill Amount :-\t%f\n",c.bill);
}
con getdata(con c,int i)
{
	printf("Enter the details of the %d consumer :-\n",i);
	printf("Enter the consumer id :-\n");
	scanf("%d",&c.cid);
	printf("Enter the name :-\n");
	scanf("%s",c.name);
	fflush(stdin);
	printf("Enter the primary meter reading :-\n");
	scanf("%d",&c.pmr);
	printf("Enter the current meter reading :-\n");
	scanf("%d",&c.cmr);
	return(c);
}
int main()
{
	printf("Enter the number of consumers :-\t");
	int n,i;
	scanf("%d",&n);
	con cons[n];
	for(i=0;i<n;i++)
	{
		cons[i]=getdata(cons[i],i);
		cons[i]=computereading(cons[i]);
		cons[i]=computebill(cons[i]);
		putdata(cons[i]);
	}
}
