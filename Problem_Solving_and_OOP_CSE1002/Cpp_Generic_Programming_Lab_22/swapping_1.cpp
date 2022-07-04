#include<iostream>
using namespace std;
template <class m>
void swaps(m x, m y)
{
	m z = x;
	x=y;
	y=z;
	cout<<"x="<<x<<endl<<"y="<<y<<endl;
}
int main()
{
	int x,y;
	cin>>x>>y;
	swaps(x,y);
	swaps(2,3);
	swaps("sdgfds","hdgcvku");
}
