#include<iostream>
using namespace std;
int addi(int a, int b, int c, int d)
{
	return(a+b+c+d);
}
int main()
{
	int a,b,c,d,sum;
	cin>>a>>b>>c>>d;
	sum=addi(a,b,c,d);
	cout<<sum;
	return(0);
}
