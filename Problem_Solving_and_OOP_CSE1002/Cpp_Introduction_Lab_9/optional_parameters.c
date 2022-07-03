#include<iostream>
using namespace std;
int addi(int a=10, int b=20, int c=30, int d=40)
{
	return(a+b+c+d);
}
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<addi(a,b,c,d);
	cout<<addi(a);
	cout<<addi(a,b,c);
	return(0);
}
