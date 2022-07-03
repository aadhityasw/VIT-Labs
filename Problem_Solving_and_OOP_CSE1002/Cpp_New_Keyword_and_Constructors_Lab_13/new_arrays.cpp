#include<iostream>
using namespace std;
int main()
{
	int *p = NULL;
	p=new int[5];
	cout<<"Enter the elements";
	for(int i=0;i<5;i++)
	{
		cin>>p[i];
		//or cin>>*(p+i);
	}
	for(int i=0;i<5;i++)
	{
		cout<<*(p+i)<<endl;
	}
}
