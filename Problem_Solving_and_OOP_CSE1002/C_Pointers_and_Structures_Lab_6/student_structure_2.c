#include<stdio.h>
struct student
{
	int sid;
	int total,m1,m2,m3;
	float avg;
};
void write(struct student q)
{
	printf("%d\n%d\n%f\n",q.sid,q.total,q.avg);
}
void compute(struct student r)
{
	r.total=r.m1+r.m2+r.m3;
	r.avg=r.total/3.0;
	write(r);
}
void read (struct student p)
{
	scanf("%d\n%d\n%d\n%d",&p.sid,&p.m1,&p.m2,&p.m3);
	compute(p);
}
int main()
{
	struct student n;
	read(n);
}
