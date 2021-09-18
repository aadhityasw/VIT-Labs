#include <omp.h> 
#include <stdio.h> 
void sum_num(int a,int b)
{
    printf("Adding %d and %d gives %d on thread %d\n",a,b,a+b, omp_get_thread_num());
}
void sum_n_num(int n)
{
	int i;
    int sum=0;
    for(i=0;i<=n;i++)
    {
        sum+=i;
    }
    printf("\nSum of first %d numbers is %d from thread %d\n",n,sum,omp_get_thread_num());
}
int main(int argc, char** argv[]) 
{ 
 #pragma omp parallel sections num_threads(2)
 {
     #pragma omp section
     sum_num(2,3);

     #pragma omp section
     sum_n_num(5);
 }
}
