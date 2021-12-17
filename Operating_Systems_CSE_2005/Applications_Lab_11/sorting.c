#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
    int arr[] = {5, 2, 1, 3, 4};

    pid_t pid;
    pid = fork();

    if(pid>0)
    {
        printf("Parent Process :\nSorted numbers are :\n");
        for(int i=0;i<5;i++)
        {
            for(int j=i;j<5;j++)
            {
                if(arr[i]>arr[j])
                {
                    int a = arr[i];
                    arr[i]=arr[j];
                    arr[j]=a;
                }
            }
        }
        for(int i=0;i<5;i++)
        {
            printf("%d\t", arr[i]);
        }
        printf("\n\n");
    }
    else if(pid == 0)
    {
        printf("Child Process :\nNumbers to sort :\n");
        for(int i=0;i<5;i++)
        {
            printf("%d\t", arr[i]);
        }
        printf("\n\n");
    }
}