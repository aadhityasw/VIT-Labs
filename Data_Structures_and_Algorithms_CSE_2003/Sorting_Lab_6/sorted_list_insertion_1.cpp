#include<iostream>
using namespace std;
void insert(int *arr1, int *arr2, int n1, int n2)
{
    int i, j, k;
    for(i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(arr1[j]>arr2[i])
            {
                break;
            }
        }
        for(k=n1+i;k>j;k--)
        {
            arr1[k] = arr1[k-1];
        }
        arr1[j] = arr2[i];
    }
}
void printArray(int *arr, int n)
{
    cout<<"The array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
int main()
{
    int n, k, i;
    cout<<"Enter the number of elements of the sorted array : ";
    cin>>n;
    cout<<"Enter the number of elements to be inserted : ";
    cin>>k;
    int arr1[n+k], arr2[k];
    cout<<"Enter the elements of the sorted array : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the elements to be inserted into the array : "<<endl;
    for(i=0;i<k;i++)
    {
        cin>>arr2[i];
    }
    insert(arr1, arr2, n, k);
    printArray(arr1, (n+k));
}