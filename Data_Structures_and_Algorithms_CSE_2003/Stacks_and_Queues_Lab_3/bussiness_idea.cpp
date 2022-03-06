#include<iostream>
#include<string>
using namespace std;

class stack
{
	public :
	sring *arr;
	int top, size;
	stack(int n)
	{
		arr = new string[n];
		top = -1;
		size = n;
	}
	void push(string ele)
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
	string pop()
	{
		if(top!=-1)
		{
			string ele = arr[top--];
			cout<<"The removed element is : "<<ele<<endl;
			return(ele);
		}
		else
		{
			cout<<"End of History"<<endl;
			return(-9999999);
		}
	}
};
int main()
{
	cout<<"Enter the size of the stack : ";
	int size, cho;
	string ele
	cin>>size;
	stack st(size);
	bool flag = true;
	while(flag)
	{
		cout<<"Choices :\n1)Forward\n2)Back\n3)exit\nEnter your choice : ";
		cin>>cho;
		switch(cho)
		{
			case 1 :
				cout<<"Enter the url to navigate : ";
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
