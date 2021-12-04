#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int p = fork();
    if(p==0)
    {
        printf("Child 1 : pid = %d, ppid = %d\n", getpid(), getppid());
        exit(0);
    }
    else
    {
        sleep(2);
    }
    
    int q = fork();
    if(q==0)
    {
        printf("Child 2 : pid = %d, ppid = %d\n", getpid(), getppid());
        exit(0);
    }
    else
    {
        sleep(2);
    }

    int r = fork();
    if(r==0)
    {
        printf("Child 3 : pid = %d, ppid = %d\n", getpid(), getppid());
        exit(0);
    }
    else
    {
        sleep(2);
    }
    printf("Hello from parent pid = %d\n", getpid());
}