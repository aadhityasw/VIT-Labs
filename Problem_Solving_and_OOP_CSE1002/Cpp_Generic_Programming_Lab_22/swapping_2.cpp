#include<iostream>
using namespace std;
template <class B>
class A
{
	private :
		B x,y;
	public :
		A(B p, B q)
		{
			x=p;
			y=q;
		}
		void swap()
		{
			B t;
			t=x;
			x=y;
			y=t;
			cout<<"After swapping\t"<<x<<" "<<y<<endl;
		}
};
int main()
{
	int x,y;
	cin>>x>>y;
	A <int>ob(x,y);
	ob.swap();
	
	char a,b;
	cin>>a>>b;
	A <char>ob1(a,b);
	ob1.swap();
	
	string c,d;
	cin>>c>>d;
	A <string>ob2(c,d);
	ob2.swap();
}
