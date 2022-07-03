#include<iostream>
using namespace std;
class test
{
	int a,b;
	int c;
	public :
		test()
		{
			a=56;
			b=67;
			c=88;
		}
		void put()
		{
			cout<<a<<endl<<b<<endl<<c<<endl;
		}
		void change()
		{
			this->c=123;
		}
		~test()
		{
			cout<<"Object destroyed"<<endl;
		}
};
int main()
{
	test f;
	f.put();
	f.change();
	f.put();
	test e;
	e.put();
}
