#include<iostream>
using namespace std;
class B;
class A
{
	private :
		int x,y;
	public :
		A()
		{
			x=5;
			y=10;
		}
		//A() : x(5) {}
		//This is to declare only one variable
		friend int add(A ob);
		friend void swap(A ob);
		void prints()
		{
			cout<<"Changed values \t"<<this->x<<this->y<<endl;
		}
		friend class B;
		friend addition(A, B);
};
class B
{
	private :
		int z;
	public :
		B()
		{
			z=7;
		}
};
int addition(A ob, B ob1)
{
	int sum;
	sum=ob.y+ob1.z;
	cout<<"Final sum :-\t"<<sum<<endl;
}
int add(A obj)
{
	int sum;
	sum=obj.x+obj.y;
	return(sum);
}
void swap(A ob)
{
	int temp = ob.x;
	ob.x=ob.y;
	ob.y=ob.x;
	ob.prints();
}
int main()
{
	B ob1;
	A ob;
	cout<<"Sum is :-   "<<add(ob)<<endl;
	swap(ob);
	addition(ob,ob1);
}
