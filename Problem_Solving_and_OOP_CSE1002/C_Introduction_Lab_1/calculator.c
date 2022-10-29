#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ch,a,b;
	double s=0.0;
	printf("*****Calculator*****\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\nEnter your choice :-\t");
	scanf("%d",&ch);
	if((ch<0)||(ch>5))
	{
		printf("Wrong Choice");
		exit(0);
	}
	printf("Enter the numbers one by one :-\t");
	scanf("%d \n %d",&a,&b);
	switch (ch)
	{
		case 1 :
			s=a+b;
			break;
		case 2 :
			s=a-b;
			break;
		case 3 :
			s=a*b;
			break;
		case 4 :
			s=a/b;
			break;
		case 5 :
			s=a%b;
	}
	printf("The answer is : %.2f",s);
}
