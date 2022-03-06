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

        void deleteList()
        {
            bool flag = true;
            Node *ptr;
            while(flag)
            {
                ptr = start;
                if(ptr->next == NULL)
                {
                    if(ptr->data %2 ==0)
                    {
                        start = new Node();
                    }
                    break;
                }
                while(ptr->next->next!=NULL)
                {
                    ptr = ptr->next;
                }
                if(ptr->next->data % 2 ==0)
                {
                    ptr->next = NULL;
                }
                else
                {
                    flag = false;
                }
                
            }
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
    list.deleteList();
    list.printList();
}
