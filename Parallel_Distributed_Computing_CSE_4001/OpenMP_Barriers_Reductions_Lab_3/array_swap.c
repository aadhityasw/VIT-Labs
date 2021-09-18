#include<stdio.h>
#include<omp.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    int i, temp, n=5;
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {6, 7, 8, 9, 10};
    #pragma omp parallel for private(temp)
    for (i=0;i<n;i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
    printf("thread %d\n", omp_get_max_threads());
}