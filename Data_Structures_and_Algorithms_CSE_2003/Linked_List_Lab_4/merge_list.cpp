#include<iostream>
using namespace std;

class Node
{
	public :
		int data;
		Node *next;
};

Node* reverse(Node *start, Node *start2)
{
	if(start->next == NULL)
	{
		return(start);
	}
	else
	{
		start2 = reverse(start->next, start2);
		Node *ptr;
		ptr = start2;
		while(ptr->next!=NULL)
		{
			ptr = ptr->next;
		}
		Node *newnode = new Node();
		newnode->data = start->data;
		newnode->next = NULL;
		ptr->next = newnode;
		return(start2);
	}
}

int main()
{
	cout<<"Enter the elements of the first list : ";
	Node *start1 = new Node();
	Node *ptr = start1;
	int i;
	for(i=0;i<5;i++)
	{
		Node *newnode = new Node();
		cin>>newnode->data;
		newnode->next = NULL;
		ptr->next = newnode;
		ptr = newnode;
	}
	Node *start1rev ;
	start1rev = reverse(start1, start1rev);
	
	cout<<"Enter the elements of the second list : ";
	Node *start2 = new Node();
	ptr = start2;
	for(i=0;i<5;i++)
	{
		Node *newnode = new Node();
		cin>>newnode->data;
		newnode->next = NULL;
		ptr->next = newnode;
		ptr = newnode;
	}
	Node *start2rev ;
	start2rev = reverse(start2, start2rev);
	
	Node *start = new Node();
	Node* ptr1, *ptr2;
	ptr1 = start1rev;
	ptr2 = start2rev;
	ptr = start;
	while(true)
	{
		if(ptr1==NULL)
		{
			while(ptr1!=NULL)
			{
				Node *newnode = new Node();
				newnode->data = ptr1->data;
				ptr->next = newnode;
				newnode->next = NULL;
				ptr = newnode;
				ptr1 = ptr1->next;
			}
			break;
		}
		else if(ptr2==NULL)
		{
			while(ptr2!=NULL)
			{
				Node *newnode = new Node();
				newnode->data = ptr2->data;
				ptr->next = newnode;
				newnode->next = NULL;
				ptr = newnode;
				ptr2 = ptr2->next;
			}
			break;
		}
		else
		{
			Node *newnode = new Node();
			if(ptr1->data>ptr2->data)
			{
				newnode->data = ptr1->data;
				ptr1 = ptr1->next;
			}
			else
			{
				newnode->data = ptr2->data;
				ptr2 = ptr2->next;
			}
			ptr->next = newnode;
			newnode->next = NULL;
			ptr = newnode;
		}
	}
	ptr = start->next;
	cout<<"The numbers are as follows : ";
	while(ptr->next!=NULL)
	{
		cout<<ptr->data<<'\t';
		ptr = ptr->next;
	}
	cout<<endl;
}
