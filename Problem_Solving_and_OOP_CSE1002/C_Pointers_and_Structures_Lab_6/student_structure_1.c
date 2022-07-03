/*
struct student
{
	int sid;
	char sname;
	int age;
	char gender;
	int total,m1,m2,m3;
	float avg;
};
//struct student s1,s2; inside main method.

//or
struct
{
	int sid;
	char sname;
	int age;
	char gender;
	int total,m1,m2,m3;
	float avg; 
}s1,s2;//We declare the objects here directly and so there is no name.
*/


#include<stdio.h>
struct student
{
	int sid;
	char sname[10];
	int age;
	char gender[7];
	int total,m1,m2,m3;
	float avg;
};
int main()
{
	struct student s1;
	printf("Enter name,id,age\n");
	scanf("%d\n%d\n%s",&s1.sid,&s1.age,s1.sname);
	printf("%d\n%d\n%s\n",s1.sid,s1.age,s1.sname);
	struct student *p;
	p=&s1;
	scanf("%d",&p->age);
	printf("%d",p->age);
}
