#include<stdio.h>
void main()
{
	int hour,min,amount;
	printf("Enter the number of hours and minutes.");
	scanf("%d%d",&hour,&min);
	if(hour>7)
	{
		printf("Invalid Input");
	}
	else if (hour>=5) 
	{
		amount=200;
		hour=hour-5;
		amount=amount+hour*50+min;
		printf("%d",amount);
	}
}
