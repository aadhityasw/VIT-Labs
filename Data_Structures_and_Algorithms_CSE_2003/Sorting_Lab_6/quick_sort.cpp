#include<iostream>
#include<stdlib.h>
using namespace std;

template <class temp>
class QuickSort
{
    public :
        temp *arr;
        int num;
        QuickSort(int size)
        {
            arr = new temp[size];
            num = size;
        }

        void printArray()
        {
            int i;
            cout<<"The elements of the array are : ";
            for(int i=0;i<num;i++)
            {
                cout<<arr[i]<<'\t';
            }
            cout<<endl;
        }

        void sortArray(int a, int b)
        {
            if(a>=b-1)
            {
                return;
            }
            else
            {
                int front=a, back=b-1;
                int pivot, t;

                //Choosing the pivot in a random manner.
                pivot = rand() % (b-a) + a;

                while(front<back)
                {
                    while(arr[front]<arr[pivot])
                    {
                        front++;
                    }
                    while(arr[back]>arr[pivot])
                    {
                        back--;
                    }
                    if(front==pivot)
                    {
                        pivot = back;
                    }
                    else if(back==pivot)
                    {
                        pivot = front;
                    }

                    t = arr[front];
                    arr[front] = arr[back];
                    arr[back] = t;

                    if(arr[front]==arr[back])
                    {
                        front++;
                    }
                }

                sortArray(a, pivot);
                sortArray(pivot+1, b);
            }
        }
};
int main()
{
    int n;
    cout<<"Enter the number of elements of the array : ";
    cin>>n;

    QuickSort<int> ob(n);
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>ob.arr[i];
    }

    ob.sortArray(0, n);
    ob.printArray();
}
