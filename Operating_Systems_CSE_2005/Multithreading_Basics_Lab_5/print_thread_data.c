#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>

pthread_t ntid;
void printids(const char*s)
{
    pid_t pid;
    pthread_t tid;
    pid = getpid();
    tid = pthread_self();
    //printf("%s pid %u tid %u (0x%x)\n", s, (unsigned int)pid, (unsigned int)tid, (unsigned int)tid);
    printf("%s pid %u tid %lu (0x%lx)\n", s, pid, tid, tid);
}

void *thr_fn(void *arg)
{
    printids("New Thread:");
    return((void*)0);
}

void main()
{
    int err;
    err = pthread_create(&ntid, NULL, thr_fn, NULL);
    if(err!=0)
    {
        printf("Error");
    }
    printids("Main Thread :");
    sleep(1);
    exit(0);
}