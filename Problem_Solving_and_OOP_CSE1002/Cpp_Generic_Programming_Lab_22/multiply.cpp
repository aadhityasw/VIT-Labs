#include<iostream>
using namespace std;
template <class m, class n>
void multi(m x, n y)
{
	cout<<(x*y)<<endl;
}
int main()
{
	int x;
	float y;
	cin>>x;
	y=3.5;
	multi(x,y);
}
