#include<iostream>
using namespace std;
class Dist
{
	private :
		int f,i;
	public :
		Dist()
		{
			f=0;
			i=0;
		}
		Dist(int a, int b)
		{
			f=a;
			i=b;
		}
		void display()
		{
			cout<<f<<endl<<i<<endl;
		}
		void operator = (Dist d)
		{
			f=d.f;
			i=d.i;
		}
		Dist operator +(Dist d)
		{
			Dist temp;
			temp.f=f+d.f;
			temp.i=i+d.i;
			return(temp);
		}
		Dist operator -(Dist d)
		{
			Dist temp;
			temp.f=f-d.f;
			temp.i=i-d.i;
			return(temp);
		}
		void operator ++()
		{
			f++;
			i++;
		}
		Dist operator ++(int)
		{
			Dist temp;
			temp=(*this);
			++(*this);
			return(temp);
		}
};
int main()
{
	Dist d1;
	d1.display();
	Dist d2(10,11);
	d2.display();
	d1=d2;
	d1.display();
	Dist d3;
	d3= d1+d2;
	cout<<"Sum";
	d3.display();
	Dist d4;
	d4=d1-d2;
	cout<<"Difference";
	d4.display();
	cout<<"Prefix";
	++d4;
	d4.display();
	Dist d5;
	cout<<"Postfix";
	d5=d4++;
	d5.display();
}
