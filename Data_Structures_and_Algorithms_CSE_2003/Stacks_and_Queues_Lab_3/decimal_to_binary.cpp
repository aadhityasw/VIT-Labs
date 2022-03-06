#include<iostream>
using namespace std;

class Stack
{
    public :
        int top;
        int *arr;
        Stack()
        {
            top = -1;
            arr = new int[100];
        }
        void push(int ele)
        {
            arr[++top] = ele;
        }
        int pop()
        {
            return(arr[top--]);
        }
};

int main()
{
    int num;
    cout<<"Enter the decimal number : ";
    cin>>num;
    int a, n;
    Stack st;
    while(num>0)
    {
        n = (int)(num%2);
        st.push(n);
        num = (int)(num/2);
    }
    cout<<"The binary number is : ";
    while(st.top>-1)
    {
        cout<<st.pop();
    }
    cout<<endl;
}
