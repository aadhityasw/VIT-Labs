#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

void f()
{
    if(fork()==0)
    {
        printf("Hi from child \n");
    }
    else
    {
        printf("Hello from parent \n");
    }
}
int main()
{
    f();
}
