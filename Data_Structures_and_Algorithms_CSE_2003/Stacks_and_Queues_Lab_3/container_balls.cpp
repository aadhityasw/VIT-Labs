#include<iostream>
using namespace std;

class stack
{
	public :
	int *arr;
	int top, size;
	stack(int n)
	{
		arr = new int[n];
		top = -1;
		size = n;
	}
	void push(int ele)
	{
		if(top!=size-1)
		{
			arr[++top] = ele;
		}
		else
		{
			cout<<"Overflow"<<endl;
		}
	}
	int pop()
	{
		if(top!=-1)
		{
			int ele = arr[top--];
			cout<<"The removed element is : "<<ele<<endl;
			return(ele);
		}
		else
		{
			cout<<"Underflow"<<endl;
			return(-9999999);
		}
	}
};
int main()
{
	cout<<"Enter the size of the stack : ";
	int size, cho, ele;
	cin>>size;
	stack st(size);
	bool flag = true;
	while(flag)
	{
		cout<<"Choices :\n1)Push\n2)Pop\n3)exit\nEnter your choice : ";
		cin>>cho;
		switch(cho)
		{
			case 1 :
				cout<<"Enter the element to be pushed : ";
				cin>>ele;
				st.push(ele);
				break;
			case 2 :
				ele = st.pop();
				cout<<"The removed element is "<<ele<<endl;
				break;
			case 3 :
				flag = false;
		}
	}
}
