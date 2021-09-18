#include <stdio.h>
#include <omp.h>
#include <time.h>


int multiply_parallel(int m, int n, int p, int a[][600], int b[][600], int c[][600])
{
    int i,j,k;
    #pragma omp parallel shared(a,b,c) private(i,j,k) 
    {
        #pragma omp for
        for (i=0; i<m; i=i+1)
        {
            for (j=0; j<n; j=j+1)
            {
                a[i][j]=0.;
                for (k=0; k<p; k=k+1)
                {
                    a[i][j]=(a[i][j])+((b[i][k])*(c[k][j]));
                }
            }
        }
   }
   return 0;
}


int multiply_serial(int m, int n, int p, int a[600][600], int b[][600], int c[][600])
{
    int i, j, k ;
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            a[i][j]=0;
            for (k=0; k<p; k++)
            {
                a[i][j] += b[i][k]*c[k][j] ;
            }
        }
    }
    return 0;
}


int main()
{
    clock_t start, end;
    double serial_time, parallel_time;

    int m, n, p, i, j;
    m = 600;
    n = 600;
    p = 600;
    int a[600][600];// = {{1, 2, 3, 4, 600}, {3, 4, 600, 6, 7}};         // Dimensions m x n
    int b[600][600];// = {{600, 6, 7, 8, 9}, {7, 8, 9, 600, 3}};         // Dimensions n x p
    int serial_mul[600][600], parallel_mul[600][600];

    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            a[i][j] = rand();
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<p;j++)
        {
            b[i][j] = rand();
        }
    }
    
    // Series Multiplication
    start = clock();
    multiply_serial(m, n, p, serial_mul, a, b);
    end = clock();
    serial_time = ((double) (end - start)) / CLOCKS_PER_SEC;
    
    // Parallel Multiplication
    start = clock();
    multiply_parallel(m, n, p, parallel_mul, a, b);
    end = clock();
    parallel_time = ((double) (end - start)) / CLOCKS_PER_SEC;

    // Printing the matrices of dimensions m x p :

    /*// Series Multiplication
    printf("The resultant matrix when multiplied in series is :\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<p;j++)
        {
            printf("%d ", serial_mul[i][j]);
        }
        printf("\n");
    }

    // Parallel Multiplication
    printf("The resultant matrix when multiplied in parallel is :\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<p;j++)
        {
            printf("%d ", parallel_mul[i][j]);
        }
        printf("\n");
    }*/

    // Print the performance measures.

    printf("The Serial Algorithm execution time : %f\n", serial_time);
    printf("The Parallel Algorithm execution time : %f\n", parallel_time);

    if (serial_time > parallel_time)
    {
        printf("Therefore the parallel execution algorrithm is faster.\n");
    }
    else if (serial_time < parallel_time)
    {
        printf("Therefore the serial execution algorrithm is faster.\n");
    }
    else
    {
        printf("Both the algorithms perform equally.\n");
    }
}