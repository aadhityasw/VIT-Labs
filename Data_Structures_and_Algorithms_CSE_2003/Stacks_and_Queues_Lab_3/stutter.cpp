#include<iostream>
using namespace std;

class Queue
{
    public :
        int front, rear;
        int *arr;
        Queue()
        {
            front = 0;
            rear = -1;
            arr = new int[1000];
        }
        void enqueue()
        {
            int ele;
            cout<<"Enter the element to be entered : ";
            cin>>ele;
            arr[++rear] = ele;
            arr[++rear] = ele;
        }
        void dequeue()
        {
            int ele;
            ele = arr[front++];
            cout<<ele<<'\t'<<endl;
        }
};

int main()
{
    bool flag = true;
    int size, cho;
    Queue queue;
    
    do
    {
        cout<<"Options avalible are : \n1)Push an element into queue.\n2)Exit."<<endl;
        cout<<"Enter your choice : ";
        cin>>cho;
        switch (cho)
        {
            case 1 :
                queue.enqueue();
                break;
            case 2 :
                flag = false;
                break;
            default:
                cout<<"Enter a valid choice."<<endl;
                break;
        }
    }while(flag);

    cout<< "The final queue is : ";
    while(queue.front != queue.rear+1)
    {
        queue.dequeue();
    }
}