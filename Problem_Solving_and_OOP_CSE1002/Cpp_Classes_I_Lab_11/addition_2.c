#include<iostream>
using namespace std;
class test
{
	public :
		int add(int a, int b)
		{
			return(a+b);
		}
};
int main()
{
	test t;
	cout<<t.add(5,6)<<endl;
	return(0);
}
