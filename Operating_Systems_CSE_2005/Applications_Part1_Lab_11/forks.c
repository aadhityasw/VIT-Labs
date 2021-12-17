#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
    pid_t pid1, pid2, pid3, pid4;

    pid1 = fork();
    pid2 = fork();

    if(pid2 > 0)
    {
        pid3 = fork();
        if(pid3 > 0)
        {
            pid4 = fork();
        }
        else if(pid3 == 0)
        {
            fork();
            fork();
        }
    }
    else if(pid2 == 0)
    {
        fork();
        fork();
    }
    sleep(5);
    printf("Hi\n");
}