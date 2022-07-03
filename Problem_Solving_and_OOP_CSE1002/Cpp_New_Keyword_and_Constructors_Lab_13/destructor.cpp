#include<iostream>
using namespace std;
class test
{
	int a,b;
	public :
		test(int c,int d)
		{
			a=c;
			b=d;
		}
		test()
		{
			a=56;
			b=67;
		}
		void put()
		{
			cout<<a<<endl<<b<<endl;
		}
		~test()
		{
			cout<<"Object destroyed"<<endl;
		}
};
int main()
{
	test a(5,6);
	a.put();
	test b();
	b.put();
}
