#include<iostream>
using namespace std;
class B;
class A
{
	private :
		int p;
		int arr[];
	public :
		A()
		{
			p=10;
			arr[5]={1,2,3,4,5};
		}
		friend class B;
		friend void func(A,B);
		friend void print(A,B);
		friend void swap(A x,B y);
		void printarr(char a)
		{
			int l = sizeof(this->arr)/sizeof(int);
			cout<<"Elements of class "<<a<<" are :-"<<endl;
			for(int i=0;i<l;i++)
			{
				cout<<this->arr[i]<<endl;
			}
		}
};
class B
{
	private :
		int q;
		int arr[];
	public :
		B()
		{
			q=22;
			arr[5]={6,7,8,9,0};
		} 
		friend void func(A,B);
		friend void print(A,B);
		friend void swap(A x,B y);
		void printarr(char a)
		{
			int l = sizeof(this->arr)/sizeof(int);
			cout<<"Elements of class "<<a<<" are :-"<<endl;
			for(int i=0;i<l;i++)
			{
				cout<<this->arr[i]<<endl;
			}
		}
};
void func(A x,B y)
{
	int temp;
	temp=x.p;
	x.p=y.q;
	y.q=temp;
}
void print(A x, B y)
{
	cout<<"A has : "<<x.p<<endl<<"B has : "<<y.q<<endl;
}
void swap(A x,B y)
{
	int l = sizeof(x.arr)/sizeof(int);
	int t;
	for(int i=0;i<l;i++)
	{
		t=x.arr[i];
		x.arr[i]=y.arr[i];
		y.arr[i]=t;
	}
}
int main()
{
	A ob1;
	B ob2;
	func(ob1,ob2);
	print(ob1,ob2);
	ob1.printarr('A');
	ob2.printarr('B');
	swap(ob1,ob2);
	ob1.printarr('A');
	ob2.printarr('B');
}
