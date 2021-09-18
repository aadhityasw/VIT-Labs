#include<stdio.h>
#include<omp.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    #pragma omp parallel
    {
        printf("Hello World from thread %d\n", omp_get_thread_num());
    }
}