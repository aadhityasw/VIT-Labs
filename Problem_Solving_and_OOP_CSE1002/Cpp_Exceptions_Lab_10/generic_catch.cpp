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
				throw 'a';
			}
			if(b==0)
			{
				throw false;
			}
			if(c==0)
			{
				throw "jkgiuyh";
			}
			cout<<"Result"<<a/(b-c)<<"\n";
		}
		catch(...)
		{
			cout<<"Caught an exception\n";
		}
		cout<<"Enter the option";
		cin>>d;
	}while(d!=0);
}
