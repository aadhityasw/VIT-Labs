#include<stdio.h>
struct student
{
	int sid;
	int total,m1,m2,m3;
	float avg;
}s;
void write()
{
	printf("%d\n%d\n%f\n",s.sid,s.total,s.avg);
}
void compute()
{
	s.total=s.m1+s.m2+s.m3;
	s.avg=s.total/3.0;
	write();
}
void read ()
{
	scanf("%d\n%d\n%d\n%d",&s.sid,&s.m1,&s.m2,&s.m3);
	compute();
}
int main()
{
	read();
}
