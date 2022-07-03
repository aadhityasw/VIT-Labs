#include<iostream>
using namespace std;
class test
{
	int a,b;
	public :
		test()
		{
			a=5;
			b=6;
		}
		void put()
		{
			cout<<a<<endl<<b;
		}
};
int main()
{
	test a;
	a.put();
}
