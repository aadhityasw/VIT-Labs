#include<iostream>
using namespace std;
inline int fact(int n)
{
	int a=1;
	for(int i =0;i<n;i++)
	{
		a=a*i;
	}
	return(a);
}
int main()
{
	int n,r;
	cin>>n>>r;
	double ans=fact(n)/(fact(n-r)*fact(r));
	cout<<ans;
	return(0);
}
