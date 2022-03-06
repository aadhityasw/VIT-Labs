#include<iostream>
using namespace std
int main()
{
	int arr[1000];
	int top = -1, size;
	cout<<"Enter the maximum size of the stack : ";
	cin>>size
	cout<<"Choose an option : "<<endl;
	cout<"1)Insert\n2)Delete\n3)Print\n4)Search\n";
	int opt;
	cin>>opt;
	switch(opt)
	{
		case 1 :
			int ele;
			cout<<"Enter the element to be inserted : ";
			cin>>ele;
			if(top == ele-1)
			{
				cout<<"Overflow";
			}
			else
			{
				arr[++top] = ele;
			}
			break;
		case 2 :
			int ele;
			cout<<"Enter the element to be deleted : ";
			cin>>ele;
			delete_ele(arr, top, ele);
			break;
		case 3 :
			print_stack(arr, top);
			break;
		case 4 :
			int ele;
			cout<<"Enter the element to be searched : ";
			cin>>ele;
			search_ele(arr, top, ele);
			break;
		default :
			cout<<"Enter valid option.";
	}
}
