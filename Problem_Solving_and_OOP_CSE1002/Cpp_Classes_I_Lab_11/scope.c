#include<iostream>
using namespace std;
class test
{
	private :
		int a,b;
	public :
		test()
		{
			a=5;
			b=6;
		}
		int sub()
		{
			return(a-b);
		}
		int add()
		{
			return(a+b);
		}
};
int main()
{
	test t;
	cout<<t.add()<<endl<<t.sub();
	return(0);
}
