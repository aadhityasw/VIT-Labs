#include<iostream>
using namespace std;
class Person
{
	protected :
		int page;
		string pname;
};
class Student : private Person
{
	private :
		int egno;
		string dpt;
		friend int main();
};
int main()
{
	Student ob;
	cin>>ob.page>>ob.pname>>ob.egno>>ob.dpt;
	cout<<ob.page<<ob.pname<<ob.egno<<ob.dpt;
}
