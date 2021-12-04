#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>

pthread_t ntid, ntid1;


void *thr_fn(void *arg)
{
    int n=10, first = 0, second = 1, next, c;
    printf("Fibonacci series of 10 terms : ");
    for (c = 0; c < n; c++)
    {
        if (c <= 1)
        next = c;
        else
        {
        next = first + second;
        first = second;
        second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
    return((void*)0);
}

void *thr_fn1(void *arg)
{
    printf("Sorting : \n");
    int n=5, c, d, swap;
    int array[5] = {1, 3, 2, 5, 4};
    
    for (c = 0 ; c < n - 1; c++)
    {
        for (d = 0 ; d < n - c - 1; d++)
        {
            if (array[d] > array[d+1]) 
            {
                swap       = array[d];
                array[d]   = array[d+1];
                array[d+1] = swap;
            }
        }
    }

    printf("Sorted list in ascending order:\n");

    for (c = 0; c < n; c++)
        printf("%d\n", array[c]);
    
    return((void*)0);
}

int main()
{
    int err, err1;
    err = pthread_create(&ntid, NULL, thr_fn, NULL);
    err1 = pthread_create(&ntid1, NULL, thr_fn1, NULL);
    if(err!=0 && err1!=0)
    {
        printf("Error");
    }
    pthread_join(ntid, NULL);
    pthread_join(ntid1, NULL);
    printf("Main Thread ends.\n");
    sleep(1);
    exit(0);
}