#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Stack
{
    public :
        int size, top;
        int *arr;
        Stack(int s)
        {
            size = s;
            top = -1;
            arr = new int[size];
        }
        void push(char ele)
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
    char stri[100];
    int res = 0;
    cout<<"Enter the expression : ";
    gets(stri);
    Stack st(sizeof(stri));
    int i;
    for(i=0;i<strlen(stri);i++)
    {
        if(stri[i]==' ')
        {
            continue;
        }
        else if(stri[i]>=48 && stri[i]<=57)
        {
            int num=0;
            while(stri[i]>=48 && stri[i]<=57 && i<sizeof(stri))
            {
                num = num*10 + (int)(stri[i]) - 48;
                i++;
            }
            st.push(num);
        }
        else
        {
            if(stri[i]=='+')
            {
                res += st.pop() + st.pop();
            }
            else if(stri[i]=='-')
            {
                res += st.pop() - st.pop();
            }
            else if(stri[i]=='*')
            {
                res += (st.pop() * st.pop());
            }
            else if(stri[i]=='/')
            {
                int a = st.pop();
                int b = st.pop();
                res += (b/a);
            }
            else if(stri[i]=='^')
            {
                int a = st.pop();
                int b = st.pop();
                res += (b^a);
            }
        }
    }
    cout<<"The result of the Postfix Expression is : "<<res<<endl;
}
