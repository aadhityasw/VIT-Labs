#include<iostream>
using namespace std;
inline int fact(int n)
{
	if(n==1)
	{
		return(1);
	}
	return(n*fact(n-1));
}
int main()
{
	int n,r;
	cin>>n>>r;
	double ans=fact(n)/(fact(n-r)*fact(r));
	cout<<ans;
	return(0);
}
