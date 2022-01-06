#include <stdio.h>
#include <omp.h>

int arr[999];
int fib(int n)
{
  int i, j;
  if (n<2)
    return n;
  else
    {
       #pragma omp task shared(i) firstprivate(n)
       i=fib(n-1);

       #pragma omp task shared(j) firstprivate(n)
       j=fib(n-2);

       #pragma omp taskwait
       arr[n-1] = (i+j);
       return i+j;
    }
}

int main()
{
  int n;
  scanf("%d", &n);

  omp_set_dynamic(0);
  omp_set_num_threads(4);

  #pragma omp parallel shared(n)
  {
    #pragma omp single
    printf ("fib(%d) = %d\n", n, fib(n));
  }
  for(int i=0;i < n;i++)
  {
      printf("%d ", arr[i]);
  }
}