#include<iostream>
using namespace std;
class Test
{
	private :
		int num;
	public :
		Test()
		{
			num=10;
		}
		void operator ++()
		{
			num+=2;
		}
		void operator --()
		{
			num-=5;
		}
		void operator +(Test t1)
		{
			this->num=this->num+t1.num;
		}
		friend int main();
};
int main()
{
	Test t,t1;
	++t;
	cout<<t.num<<endl;
	--t;
	cout<<t.num<<endl;
	t+t1;
	cout<<t.num;
}
