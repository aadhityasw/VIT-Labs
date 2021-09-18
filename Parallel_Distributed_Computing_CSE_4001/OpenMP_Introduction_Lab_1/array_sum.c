#include <stdio.h>
#include <omp.h>
int main()
{
    int cursum, total,n;
    int a[10]={1,2,3,4,5,1,2,3,4,5};
    n = sizeof(a)/sizeof(int);

    #pragma omp parallel private(cursum) shared(total) 
    {
        cursum = 0;
        total = 0; 
        #pragma omp for 
            for(int i = 0; i <= n; i++)
            {
                cursum += a[i];
            }
        
        #pragma omp critical
        {
            total += cursum;
        }
    }
    printf("Total Sum: %d\n", total);
    return 0; 
}