#include<iostream>
using namespace std;

class Node
{
    //-------------------------------------------Creation of Node-------------------------------------------
    public :
        int data;
        Node *next;
};

class Linkedlist
{
    public :
        Node *start, *ptr;

        Linkedlist()
        {
            start = NULL;
        }

        void insertFront(int n)
        {
            //-------------------------------------------Insertion in Front-------------------------------------------
            Node *newnode = new Node();
            newnode->data = n;
            newnode->next = NULL;
            if(start == NULL)
            {
                start = newnode;
            }
            else
            {
                newnode->next = start;
                start = newnode;
            }
        }

        void search(int n)
        {
            ptr = start;
            bool flag = false;
            if(start->data == n)
            {
                cout<<"Element fount in the front of the list."<<endl;
            }
            else
            {
                while(ptr->next!=NULL)
                {
                    if(ptr->next->data==n)
                    {
                        flag = true;
                        Node *node;
                        node = ptr->next;
                        ptr->next = node->next;
                        node->next = NULL;
                        insertFront(n);
                        break;
                    }
                    ptr = ptr->next;
                }
                if(flag==false)
                {
                    cout<<"The element is not found."<<endl;
                }
            }
        }

        void printList()
        {
            //-------------------------------------------Printing Nodes-------------------------------------------
            cout<<"The nodes in the list are : ";
            ptr = start;
            while(ptr!=NULL)
            {
                cout<<ptr->data<<'\t';
                ptr = ptr->next;
            }
            cout<<endl;
        }
};

int main()
{
    int num;
    cout<<"Enter the number of elements to be entered : ";
    cin>>num;
    int i, n;
    Linkedlist list;
    cout<<"Enter the elements : ";
    for(i=0;i<num;i++)
    {
        cin>>n;
        list.insertFront(n);
    }
    list.printList();
    cout<<"Enter the element to be searched : ";
    cin>>n;
    list.search(n);
    list.printList();
}
