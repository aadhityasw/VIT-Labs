#include<iostream>
using namespace std;

class Queue
{
    public :
        int size, front, rear;
        char *arr;
        Queue()
        {
            front = 0;
            rear = -1;
            arr = new char[1000];
        }
        void enqueue(char ele)
        {
            arr[++rear] = ele;
        }
        char dequeue()
        {
            char ele;
            ele = arr[front++];
            return(ele);
        }
};

class Stack
{
    public :
        int size, top;
        char *arr;
        Stack()
        {
            top = -1;
            arr = new char[size];
        }
        void push(char ele)
        {
            arr[++top] = ele;
        }
        char pop()
        {
            char ele;
            ele = arr[top--];
            return(ele);
        }
};

int main()
{
    bool flag = true;
    int size, cho;
    Queue queue;
    Stack stack;
    char ele;
    do
    {
        cout<<"Options avalible are : \n1)Insert an element.\n2)Exit."<<endl;
        cout<<"Enter your choice : ";
        cin>>cho;
        switch (cho)
        {
            case 1 :
                cout<<"Enter the element to be inserted : ";
                cin>>ele;
                queue.enqueue(ele);
                stack.push(ele);
                break;
            case 2 :
                flag = false;
                break;
            default:
                cout<<"Enter a valid choice."<<endl;
                break;
        }
    }while(flag);


    while(stack.top>-1)
    {
        queue.enqueue(stack.pop());
    }

    cout<< "The final queue is : ";
    while(queue.front != queue.rear+1)
    {
        cout<<queue.dequeue();
    }
    cout<<endl;
}