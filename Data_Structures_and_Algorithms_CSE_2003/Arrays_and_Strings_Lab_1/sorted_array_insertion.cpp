using namespace std;
#include<iostream>
int main()
{
	cout<<"Enter the value of n :";
	int n;
	cin>>n;
	int arr[50];
	cout<<"Enter the elements of the array : ";
	for(int i=0;i< n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the value of k :";
	int k;
	cin>>k;
	int karr[50];
	cout<<"Enter the elements of the array : ";
	for(int i=0;i< k; i++)
	{
		cin>>karr[i];
	}
	int a = 0, i, j;
	for (i = 0; i < k; i++)
    {  
       for (j = 0; j < k-i-1; j++)
       {
           if (karr[j] > karr[j+1])
           {
              a = karr[j];
              karr[j] = karr[j+1];
              karr[j+1] = a;
            }
        }
    }
    /*for(i=0;i<k;i++)
    {
        cout<<karr[i]<<endl;
    }*/
	a = 0;
    i = 0;
	while(i<n)
	{
		if(a>=k)
        {
            break;
        }
        if(arr[i]>=karr[a])
        {
            for(j=n-1;j>=i;j--)
            {
                arr[j+1] = arr[j];
            }
            arr[i] = karr[a];
            a++;
            n++;
        }
        i++;
    }
    for(i=a;i<k;i++)
    {
        arr[n] = karr[i];
        n++;
    }
    cout<<"The final added array is : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
