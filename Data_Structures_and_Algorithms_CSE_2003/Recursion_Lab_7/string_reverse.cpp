#include<iostream>
using namespace std;

int reverse(int b)
{
    char ch;
    cin.get(ch);
    if(ch=='\n')        //Newline key is used as the delimiter to act as the end of input.
    {
        cout<<"The reversed string is : ";
        return(b);
    }
    else
    {
        if(ch==' ')
        {
            b++;
        }
        b = reverse(b);
        cout<<ch;
        return(b);
    }
}

int main()
{
    int n, b;
    cout<<"Enter the string : ";
    b = reverse(0);
    cout<<endl;
    if(b>0)
    {
        cout<<"The nuumber of blank spaces in the enterd string is : "<<b<<endl;
    }
    else
    {
        cout<<"The entered string has no blank spaces."<<endl;
    }
}
