#include<iostream>
using namespace std;

template<class temp>
class MergeSort
{
    public :
        temp *arr;
        int n;

        MergeSort(int size)
        {
            arr = new temp[size];
            n = size;
        }

        void mergeSort(int l, int r)
        {
            if(l<r)
            {
                int m = l + (r-l)/2;
                mergeSort(l, m);
                mergeSort(m+1, r);
                mergeArray(l, m, r);
            }
        }

        void mergeArray(int l, int m, int r)
        {
            temp temparr[r-l+1];
            int i=l, j=m+1, k=0;
            while(i<=m && j<=r)
            {
                if(arr[i]<arr[j])
                {
                    temparr[k++] = arr[i++];
                }
                else
                {
                    temparr[k++] = arr[j++];
                }
            }
            while(i<=m)
            {
                temparr[k++] = arr[i++];
            }
            while(j<=r)
            {
                temparr[k++] = arr[j++];
            }
            k = l;
            i=0;
            while(k<=r)
            {
                arr[k++] = temparr[i];
                i++;
            }
        }

        void printArray()
        {
            cout<<"The array is : ";
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<"\t";
            }
            cout<<endl;
        }
};

int main()
{
    int n, i;
    cout<<"Enter the number of elements to be entered : ";
    cin>>n;

    MergeSort<int> ob(n);

    cout<<"Enter the elements : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>ob.arr[i];
    }

    ob.mergeSort(0, n-1);
    ob.printArray();
}
