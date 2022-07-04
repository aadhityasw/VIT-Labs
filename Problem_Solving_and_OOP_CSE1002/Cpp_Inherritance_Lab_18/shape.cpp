#include<iostream>
#include<cmath>
using namespace std;
class Base
{
	protected :
		int  number;
	private :
		Base()
		{
			number=0;
		}
		void const getno()
		{
			cout<<"Enter the number :-  ";
			cin>>number;
		}
		void const putno()
		{
			cout<<number<<endl;
		}
		friend class Square;
		friend class Cube;
		friend int main();
};
class Square : private Base
{
	private :
		void sq()
		{
			number=pow(number,2);
		}
		friend class Cube;
		friend int main();
};
class Cube : private Base
{
	private :
		void cu()
		{
			number = pow(number,3);
		}
		friend int main();
};
/*class Cube : private Square
{
	private :
		void cu()
		{
			sq();
			number = pow(sqrt(number),3);
		}
		friend int main();
};*/
void printcho()
{
	cout<<"Choices :-\n1) Square\n2)Cube\n3)Exit\nEnter Your Choice : ";
}
int main()
{
	int ch;
	do
	{
		printcho();
		cin>>ch;
		if(ch==1)
		{
			Square ob;
			ob.getno();
			ob.sq();
			ob.putno();
		}
		else if (ch==2)
		{
			Cube ob;
			ob.getno();
			ob.cu();
			ob.putno();
		}
		else if (ch==3)
		{
			cout<<"Thank You";
			break;
		}
		else
		{
			cout<<"Enter a valid Output"<<endl;
		}
	}while(ch!=3);
}
