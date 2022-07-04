#include<iostream>
using namespace std;
class A
{
	public :
		void disp()
		{
			cout<<"Base class"<<x;
		}
	protected :
		int x=10;
};
class B : private A
{
	public :
		void displ()
		{
			//disp();
			cout<<"Class B"<<x;
		}
};
class C : public B
{
	
};
int main()
{
	B ob;
	ob.displ();
}
