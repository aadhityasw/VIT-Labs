#include<iostream>
using namespace std;

class Node
{
	public :
		char data;
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
	string stri, rev="";
	cout<<"Enter the string : ";
	cin>>stri;
	int i;
	Node *start;
	Node *ptr;
	start = new Node();
	ptr = start;
	for(i=0;i<stri.length();i++)
	{
		Node *newnode = new Node();
		newnode->data = stri[i];
		newnode->next = NULL;
		ptr->next = newnode;
		ptr = newnode;
	}
	Node *start2;
	start2 = reverse(start, start2);
	Node* ptr2;
	ptr2 = start2;
	while(ptr2!=NULL)
	{
		rev += ptr2->data;
		ptr2 = ptr2->next;
	}
	cout<<"The reversed string is : "<<rev;
} 