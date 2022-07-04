#include<iostream>
#include<string.h>
using namespace std;
template <class m>
class Stacks
{
	
	public :
	int ptr,size;
	m *arr;
	Stacks(int s)
	{
		//template <class m>
		arr = new m[s];
		ptr=-1;
		size =s;
	}
	void read()
	{
		m no;
		int cho;
		do
		{
			cout<<"1)Push an element into the stack\n2)Pop an element out of the stack"<<endl;
			cout<<"Enter the choice :- ";
			cin>>cho;
			switch(cho)
			{
				case 1 :
					cout<<"Enter the data :- ";
					cin>>no;
					this->push(no);
					break;
				case 2 :
					this->pop();
					break;
			}
		}while(cho<3);
	}
	void push(m no)
	{
		if(ptr==(size-1))
		{
			cout<<"Stack is full"<<endl;
		}
		else
		{
			ptr++;
			arr[ptr]=no;
		}
	}
	void pop()
	{
		if(ptr==-1)
		{
			cout<<"Stack is empty"<<endl;
		}
		else
		{
			cout<<"The number is :- "<<arr[ptr]<<endl;
			ptr--;
		}
	}
};
int main()
{
	cout<<"Enter the size of the stack :- ";
	int size;
	cin>>size;
	int cho;
	cout<<"Choose your data type of the stack :-\n1)String\n2)Integer\n3)Floating point literal\n4)Character\nEnter your choice :-   ";
	cin>>cho;
	/*switch(cho)
	{
		case 1:
			Stacks <string>ob(size);
			ob.read();
			break;
		case 2:
			Stacks <int>ob(size);
			ob.read();
			break;
		case 3:
			Stacks <double>ob(size);
			ob.read();
			break;
		case 4:
			Stacks <char>ob(size);
			ob.read();
			break;
	}*/
	if(cho==1)
	{
		Stacks <string>ob(size);
		ob.read();
	}
	else if(cho==2)
	{
		Stacks <int>ob(size);
		ob.read();
	}
	else if(cho==3)
	{
		Stacks <double>ob(size);
		ob.read();
	}
	else
	{
		Stacks <char>ob(size);
		ob.read();
	}
}
