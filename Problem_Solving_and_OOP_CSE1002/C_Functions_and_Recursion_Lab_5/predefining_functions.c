#include<stdio.h>
#include<math.h>
void read(int *,int);
float means(int *,int);
void print(int *,int,float);
void main()
{
	int acc[20],total=0,num,c;
	float mean;
	scanf("%d",&num);
	read(acc,num);
	mean=means(acc,num);
	printf("%f\n",mean);
	print(acc,num,mean);
}
void read(int *acc,int num)
{
	int c;
	for(c=0;c<num;c++)
	{
		scanf("%d",&acc[c]);
	}
}
float means(int *acc,int num)
{
	int t=0,c;
	for(c=0;c<num;c++)
	{
		t+=acc[c];
	}
	return((float)(t/num));
}
void print(int *acc,int num,float mean)
{
	int c;
	for(c=0;c<num;c++)
	{
		printf("%d\n",(int)round(fabsf(mean-acc[c])));
	}
}
