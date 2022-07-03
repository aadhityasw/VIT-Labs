#include<iostream>
using namespace std;
class test
{
	public :
		int a,b;
		int add(int a, int b)
		{
			return(a+b);
		}
};
int main()
{
	test t;
	t.a=5;
	t.b=6;
	cout<<t.add(t.a,t.b);
	return(0);
}
