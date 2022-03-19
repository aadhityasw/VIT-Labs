#include<iostream>
using namespace std;

bool check_prime(int n, int a)
{
    if(a==1)
    {
        return(true);
    }
    else
    {
        if(n%a==0)
        {
            return(false);
        }
        return(check_prime(n, a-1));
    }
}

int main()
{
    int n;
    cout<<"Enter the number to be checked : ";
    cin>>n;
    bool flag = check_prime(n, (int)(n/2));
    if(flag)
    {
        cout<<"The entered number "<<n<<" is a prime number."<<endl;
    }
    else
    {
        cout<<"The entered number "<<n<<" is not a prime number."<<endl;
    }
}
