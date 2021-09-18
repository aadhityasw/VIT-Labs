#include<stdio.h>
#include<omp.h>
#include<stdlib.h>


int main(int argc, char* argv[])
{
    #pragma omp parallel
    {
        #pragma omp single
        {
            printf("Inside single section\n");
        }
        printf("Thread no : %d\n", omp_get_thread_num());
    }
}