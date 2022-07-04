#include<iostream>
using namespace std;
class Shape
{
	public :
		virtual void print()
		{
			cout<<"Shape";
		}
};
class Square : public Shape
{
	public :
		void print()
		{
			cout<<"Square";
		}
};
class Rect : public Shape
{
	public :
		void print()
		{
			cout<<"Rectangle";
		}
};
int main()
{
	Shape *sh;
	Square sq;
	sh=&sq;
	sh->print();
	Rect rect;
	sh=&rect;
	sh->print();
}
