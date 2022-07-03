#include<iostream>
using namespace std;
int main()
{
	double a,b,c;
	int d;
	do
	{
		cin>>a>>b>>c;
		cin>>d;
		try
		{
			if(b==c)
			{
				throw b;
			}
			cout<<"Result"<<a/(b-c);
		}
		catch(double b)
		{
			cout<<"Cannot divide by zero";
		}
		cout<<"Enter the option";
	}while(d!=0);
}
