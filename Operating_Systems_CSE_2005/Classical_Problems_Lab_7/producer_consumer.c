#include<stdio.h>
#include<pthread.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<semaphore.h>

sem_t empty,full,mutex;
char buf[10];


void* thread_fun1(void* arg) {
    int i;
    printf("inside producer\n");

    for(i=0;i<10;i++) {
        sem_wait(&empty);
        sem_wait(&mutex);
        buf[i]=i;
        printf("item produced is %d\n",buf[i]);
        sem_post(&mutex);
        sem_post(&full);
        sleep(2);
    }
    pthread_exit("producer\n");
}


void * thread_fun2(void* arg) {
    int j;
    printf("inside consumer\n");

    for(j=0;j<10;j++) {
        sem_wait(&full);
        sem_wait(&mutex);
        j=buf[j];
        printf("consumed item is:%d\n",buf[j]);

        sem_post(&mutex);
        sem_post(&empty);
        sleep(3);
    }
    pthread_exit("consumer\n");
}


int main() {
    pthread_t pid1,pid2;
    sem_init(&empty,0,10);
    sem_init(&full,0,0);
    sem_init(&mutex,0,1);
    void *status;

    pthread_create(&pid1,NULL,thread_fun1,NULL);
    pthread_create(&pid2,NULL,thread_fun2,NULL);
    pthread_join(pid1,&status);
    //printf("the exited status of 1st is %s\n",(char*)status);
    pthread_join(pid2,&status);
    //printf("the exited status of %s\n",(char*)status);

    return 0;
}
