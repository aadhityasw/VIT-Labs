#include <mpi.h>
#include <stdio.h>
int main(int argc, char **argv)
{
int len,node,sum=0;
char name[MPI_MAX_PROCESSOR_NAME];
MPI_Init(&argc,&argv);
MPI_Comm_rank(MPI_COMM_WORLD, &node);
MPI_Get_processor_name(name,&len);
printf("hello from Node %s my rank is%d\n",name,node);
MPI_Reduce(&node, &sum, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
    if(node == 0)
    {
        printf("The sum of all ranks is %d.\n", sum);
    }
MPI_Finalize();
return 0;
}
