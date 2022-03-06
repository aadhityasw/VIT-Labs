#include<iostream>
using namespace std;

class Stack
{
    public :
        int size, top;
        char *arr;
        Stack(int s)
        {
            size = s;
            top = -1;
            arr = new char[size];
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

int presedence(char a)
{
    if(a == '^')
    {
        return(3);
    }
    else if(a == '*' || a == '/')
    {
        return(2);
    }
    else if(a == '+' || a == '-')
    {
        return(1);
    }
    return(-1);
}

int main()
{
    string stri, res;
    res = "";
    cout<<"Enter the expression : ";
    cin>>stri;
    Stack st(sizeof(stri));
    int i;
    for(i=0;i<sizeof(stri);i++)
    {
        if((stri[i]>=48 && stri[i]<=57)||(stri[i] >= 'a' && stri[i] <= 'z')||(stri[i] >= 'A' && stri[i] <= 'Z'))
        {
            res += stri[i];
        }
        else if(stri[i]=='(')
        {
            st.push(stri[i]);
        }
        else if(stri[i]==')')
        {
            char ch;
            while(true)
            {
                ch = st.pop();
                if(ch=='(')
                {
                    break;
                }
                else
                {
                    res += ch;
                }
            }
        }
        else
        {
            while(st.top!=-1 && presedence(stri[i])<=presedence(st.arr[st.top]))
            {
                char ele;
                ele = st.pop();
                res += ele;
            }
            st.push(stri[i]);
        }
    }
    while(st.top>-1)
    {
        res += st.pop();
    }
    cout<<"The postfix Expression is : "<<res<<endl;
}
