#include<stdio.h>
#include<omp.h>
#include<stdlib.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int sum = 0;
    #pragma omp parallel for reduction(+: sum)
    for(int i=0;i<5;i++)
    {
        sum += a[i];
        printf("sum = %d\ti = %d\tthreadno = %d\n", sum, i, omp_get_thread_num());
    }
    printf("sum = %d\n", sum);
}