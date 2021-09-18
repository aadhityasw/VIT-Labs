#include<stdio.h>
#include<omp.h>
#include<stdlib.h>


double fact(double n)
{
    double f=1;
    for (int i=1;i<n;i++)
    {
        f *= i;
    }
    return (f);
}


int main(int argc, char* argv[])
{
    double y1,y2,y;
    #pragma omp sections
    {
        #pragma omp section
            y1 = fact(1);
        #pragma omp section
            y2 = fact(4);
    }
    y = y1 + y2;
    printf("%f\n", y);
}