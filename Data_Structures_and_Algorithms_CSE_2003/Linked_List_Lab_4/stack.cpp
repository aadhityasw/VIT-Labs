#include<iostream>
using namespace std;

class Node
{
    //-------------------------------------------Creation of Node-------------------------------------------
    public :
        char data;
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

        void insertFront(char ch)
        {
            //-------------------------------------------Insertion in Front-------------------------------------------
            Node *newnode = new Node();
            newnode->data = ch;
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

        char popFront()
        {
            char ch = start->data;
            if(start->next == NULL)
            {
                start = NULL;
            }
            else
            {
                ptr = start->next;
                start->next = NULL;
                start = ptr;
            }
            return(ch);
        }
};

int main()
{
    string s1, s2, s3;
    cout<<"Enter string 1 : ";
    cin>>s1;
    cout<<"Enter string 2 : ";
    cin>>s2;
    int i;
    Linkedlist list;
    for(i=0;i<s1.length();i++)
    {
        list.insertFront(s1[i]);
    }
    for(i=0;i<s2.length();i++)
    {
        list.insertFront(s2[i]);
    }
    s3 = "";
    for(i=0;i<s1.length()+s2.length();i++)
    {
        s3 += list.popFront();
    }
    cout<<"The final answer is : "<<s3;
    cout<<endl;
}
