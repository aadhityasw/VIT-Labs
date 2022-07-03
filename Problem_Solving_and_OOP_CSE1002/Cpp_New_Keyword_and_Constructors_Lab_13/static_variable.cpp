#include<iostream>
using namespace std;
class test
{
	int a,b;
	static int c;
	public :
		test()
		{
			a=56;
			b=67;
		}
		void put()
		{
			cout<<a<<endl<<b<<endl<<c<<endl;
		}
		static void change()
		{
			c=123;
		}
		~test()
		{
			cout<<"Object destroyed"<<endl;
		}
};
int test :: c=10;
int main()
{
	test f;
	f.put();
	f.change();
	f.put();
	test e;
	e.put();
}
