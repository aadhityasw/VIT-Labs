#include<iostream>
using namespace std;
class person
{
	public :
		string lname,fname,zcode;
		person()
		{
			lname="X";
			fname="X";
			zcode="X";
		}
		person(string a,string b,string c)
		{
			lname=a;
			fname=b;
			zcode=c;
		}
		display()
		{
			cout<<lname<<endl<<fname<<endl<<zcode<<endl;
		}
};
int main()
{
	person p1;
	p1.display();
	person p2("a","b","c");
	p2.display();
}
