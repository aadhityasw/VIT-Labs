#include<iostream>
using namespace std;
class icecream
{
	public :
		string flavor,ctype;
		int no,price;
		icecream()
		{
			flavor="Vanilla";
			no=1;
			ctype="Sugar";
			price=(no*75)+40;
		}
		display()
		{
			cout<<flavor<<endl<<no<<endl<<ctype<<endl<<price;
		}
};
int main()
{
	icecream c;
	c.display();
}
