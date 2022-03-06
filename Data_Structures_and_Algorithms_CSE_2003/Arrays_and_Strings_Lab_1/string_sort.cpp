using namespace std;
#include<iostream>
#include<string.h>
int main()
{
	char arr[20] = "vit chennai";
	int n = strlen(arr);
	int i, j;
	char a;
	for (i = 0; i < n-1; i++)
	{
       for (j = 0; j < n-i-1; j++)  
       {
           if (arr[j] > arr[j+1]) 
           {
              a = arr[j];
              arr[j] = arr[i];
              arr[i] = a;
          }
      }
	}
	cout<<arr;
}
