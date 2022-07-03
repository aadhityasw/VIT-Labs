#include<iostream>
#include<cmath>
using namespace std;
class Choice;
class Circle
{
	private :
		double area(double r)
		{
			return(3.14*r*r);
		}
		friend class Choice;
};
class Rectangle
{
	private :
		friend class Choice;
		double area(double a,double b)
		{
			return(a*b);
		}
};
class Triangle
{
	private :
		friend class Choice;
		double area(int a,int b,float c)
		{
			double s=(a+b+c)/2;
			double ar=pow(s*(s-a)*(s-b)*(s-c),0.5);
			return(ar);
		}
};
class Choice
{
	private :
		int ch=0;
		double arr;
		void cho()
		{
			do
			{
				cout<<"Enter your choice :- ";
				cin>>ch;
				switch (ch)
				{
					case 1 :
						Circle ob;
						double r;
						cout<<"Enter the Radius :- ";
						cin>>r;
						arr=ob.area(r);
						break;
					case 2 :
						Rectangle ob1;
						double a,b;
						cout<<"Enter the length and the breadth :- ";
						cin>>a>>b;
						arr=ob1.area(a,b);
						break;
					case 3 :
						Triangle ob2;
						double s1,s2;
						int s3;
						cout<<"Enter the sides of the triangle :- ";
						cin>>s1>>s2>>s3;
						arr=ob2.area(s1,s2,s3);
						break;
					case 4 :
						cout<<"Thank You"<<endl;
						break;
					default :
						cout<<"Enter a valid choice."<<endl;
				}
				if((ch<4)&&(ch>0))
				{
					cout<<"The area is :- "<<arr<<endl;
				}
			}while(ch!=4);
		}
		friend int main();
};
int main()
{
	Choice obj;
	obj.cho();
}
