#include<iostream>
using namespace std;
template <class T>
//Function template
void print(T x)
{
	cout<<"x = "<<x<<endl;
}
int main()
{
	int x;
	cin>>x;
	print(x);
	double y;
	cin>>y;
	print(y);
}
