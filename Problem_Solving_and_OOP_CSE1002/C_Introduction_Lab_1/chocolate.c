#include<stdio.h>
int main()
{
	float a,b;
	int num,numofchoc,numoffree,total;
	sacnf("%f%f%d",&a,&b,&num);
	numofchoc=(int)(a/b);
	numoffree=numofchoc/num;
	total=numofchoc+numoffree;
	printf("with amount Rs.%f in hand and price of chocolate is %f the child can get %d chocolates.",a,b,total);
	return(0);
}
