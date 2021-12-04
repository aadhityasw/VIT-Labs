#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>

pthread_t ntid, ntid1;


void *thr_fn(void *arg)
{
    for(int i=0;i<100;i++)
    {
        printf("Hi");
    }
    return((void*)0);
}

void *thr_fn1(void *arg)
{
    for(int i=0;i<100;i++)
    {
        printf("Hello");
    }
    return((void*)0);
}

void main()
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
    sleep(1);
    exit(0);
}