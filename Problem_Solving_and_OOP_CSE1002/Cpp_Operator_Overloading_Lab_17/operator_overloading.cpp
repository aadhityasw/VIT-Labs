#include<iostream>
using namespace std;
class Test
{
	private :
		int cou,c;
	public :
		Test()
		{
			cou=10;
			c=10;
		}
		void operator ++()
		{
			cou=cou-1;
			c++;
		}
		friend int main();
};
int main()
{
	Test t;
	++t;
	cout<<t.cou<<endl<<t.c;
}
