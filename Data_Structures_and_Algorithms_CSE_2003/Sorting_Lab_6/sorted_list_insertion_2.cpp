#include<iostream>
using namespace std;
void printArray(int *arr, int n)
{
    cout<<"The array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
void insert(int *arr, int *arr1, int *arr2, int n1, int n2)
{
    int i=0, j=0, k=0;
    while(i<=n1 && j<=n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
        {
            arr[k++] = arr2[j++];
        }
    }
    k--;
    while(i<=n1)
    {
        arr[k++] = arr1[i++];
    }
    while(j<=n2)
    {
        arr[k++] = arr2[j++];
    }
}
void sortArray(int *arr, int n)
{
    int i, j, t;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
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
    sortArray(arr2, k);
    int arr[n+k];
    insert(arr, arr1, arr2, n, k);
    printArray(arr, (n+k));
}