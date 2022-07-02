#include<stdio.h>
int main()
{
	double avg;
	scanf("%f",&avg);
	if(avg>=75)
		printf("Distinction");
	else if(avg>=60)
		printf("1st Class");
	else if(avg>50)
		printf("2nd Class");
	else if(avg>=45)
		printf("3rd Class");
	else 
		printf("Fail");
}
