#include<iostream>
using namespace std;

class Stack
{
    public :
        int top;
        char *arr;
        Stack()
        {
            top = -1;
            arr = new char[100];
        }
        void push(char ele)
        {
            arr[++top] = ele;
        }
        char pop()
        {
            return(arr[top--]);
        }
};

int main()
{
    string stri;
    Stack st;
    cin>>stri;
    int i;
    int len = stri.length();
    for(i=0;i<((int)len/2);i++)
    {
        st.push(stri[i]);
    }
    if(len%2!=0)
    {
        i++;
    }
    bool flag = true;
    for(i;i<len;i++)
    {
        if(stri[i]!=st.pop())
        {
            flag = false;
        }
    }
    if(flag==true)
    {
        cout<<"It is a palindrome"<<endl;
    }
    else
    {
        cout<<"It is not a palindrome"<<endl;
    }
    
}