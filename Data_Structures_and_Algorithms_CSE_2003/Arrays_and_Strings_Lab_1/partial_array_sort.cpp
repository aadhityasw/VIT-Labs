using namespace std;
#include<iostream>
int main()
{
	cout<<"Enter the number of numbers : ";
	int n;
	cin>>n;
	int arr[n];
	for (int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int a;
	for (int i = 0; i < n-1; i+=2)
	{
       for (int j = 0; j < n-i-1; j+=2)  
       {
       			if (arr[j] > arr[j+2]) 
	           {
	              a = arr[j];
	              arr[j] = arr[i];
	              arr[i] = a;
	           }
   		}
    }
    for(int i=0;i<n;i++)
    {
    	cout<<arr[i]<<endl;
	}
}
