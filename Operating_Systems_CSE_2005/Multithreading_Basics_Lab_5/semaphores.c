#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>

sem_t mutex;
pthread_t ntid, ntid1;

void *hi(void *arg)
{
    sem_wait(&mutex);
    int i;
    for(i=0;i<50;i++)
    {
        printf("Hi");
    }
    printf("\n");
    sem_post(&mutex); 
}

void *hello(void *arg)
{
    sem_wait(&mutex);
    int i;
    for(i=0;i<50;i++)
    {
        printf("Hello");
    }
    printf("\n");
    sem_post(&mutex); 
}

void main()
{
    int err, err1;
    err = pthread_create(&mutex, NULL, hi, NULL);
    err1 = pthread_create(&mutex, NULL, hello, NULL);
    if(err!=0 )
    {
        printf("Error");
    }
    pthread_join(ntid, NULL);
    pthread_join(ntid1, NULL);
    sleep(1);
    exit(0);
}