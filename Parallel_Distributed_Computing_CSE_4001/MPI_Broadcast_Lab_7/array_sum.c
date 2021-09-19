#include <mpi.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 

int main(int argc, char **argv)
{
	int myid, numprocs;
    int sum=0;

	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD, &numprocs);
	MPI_Comm_rank(MPI_COMM_WORLD, &myid);

    if(myid == 0) {
        for(int i=0;i<40;i++)
            sum+=i;
    }

    printf("Thread [%d]: Before Broadcast, sum is %d\n", myid, sum);
    MPI_Bcast(&sum, 1, MPI_INT, 0, MPI_COMM_WORLD);
    printf("Thread [%d]: After Broadcast, sum is %d\n", myid, sum);

    MPI_Finalize();
}
