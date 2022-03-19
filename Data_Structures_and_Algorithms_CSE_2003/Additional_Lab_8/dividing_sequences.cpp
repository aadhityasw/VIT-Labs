#include<iostream>
using namespace std;

int main()
{
    int n, i, j, maxleng=1, ma;

    cout<<"Enter the number of elements in the sequence : ";
    cin>>n;
    int arr[n], parr[n];
    cout<<"Enter the sequence of numbers : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //parr[0] = 1;
    for(i=0;i<n;i++)
    {
        ma = 0;
        parr[i] = 0;
        for(j=0;j<i;j++)
        {
            if(arr[i]%arr[j]==0 && parr[j]>ma)
            {
                ma = parr[j];
            }
        }
        parr[i] = ma+1;
        if(maxleng < parr[i])
        {
            maxleng = parr[i];
        }
    }

    cout<<"The length of the longest fully dividing subsequence of the input sequence is : "<<maxleng<<endl;
}