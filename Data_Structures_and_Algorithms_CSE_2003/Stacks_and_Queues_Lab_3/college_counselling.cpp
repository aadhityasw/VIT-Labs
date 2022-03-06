#include<iostream>
using namespace std;

class Student
{
    public :
        string name;
        int rank;
};

class Queue
{
    public :
        int front, rear;
        Student *arr;
        Queue()
        {
            front = 0;
            rear = -1;
            arr = new Student[1000];
        }
        void enqueue()
        {
            Student ele;
            cout<<"Enter the student's detalis to be entered : \n Name : ";
            cin>>ele.name;
            cout<<"Rank : ";
            cin>>ele.rank;
            arr[++rear] = ele;
        }
        void dequeue()
        {
            Student ele;
            ele = arr[front++];
            cout<<"The Student that has exit : "<<ele.name<<endl;
        }
};

int main()
{
    int timetot=0;
    bool flag = true;
    int cho;
    Queue queue;
    while(flag)
    {
        cout<<"Options : \n1)Enter a student into Counselling\n2)Finish the counselling of the student.\n3)Exit\nEnter your option : "<<endl;
        cin>>cho;
        if(cho==1)
        {
            queue.enqueue();
            timetot += 5;
        }
        else if(cho==2)
        {
            queue.dequeue();
        }
        else if (cho==3)
        {
            flag = false;
        }
        else
        {
            cout<<"Enter a valid option."<<endl;
        }
    }
    cout<<"The total time taken is : "<<timetot<<endl;
}
