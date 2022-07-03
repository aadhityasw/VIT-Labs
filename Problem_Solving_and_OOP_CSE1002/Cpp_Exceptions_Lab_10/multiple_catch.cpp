#include<iostream>
using namespace std;
int main()
{
	double b,c;
	int a;
	int d;
	do
	{
		cin>>a>>b>>c;
		try
		{
			if(b==c)
			{
				throw b;
			}
			if(a==0)
			{
				throw a;
			}
			cout<<"Result"<<a/(b-c)<<"\n";
		}
		catch(double b)
		{
			cout<<"Cannot divide by zero\n";
		}
		catch(int a)
		{
			cout<<"2nd condition\n";
		}
		cout<<"Enter the option";
		cin>>d;
	}while(d!=0);
}
