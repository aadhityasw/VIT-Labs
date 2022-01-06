#include<stdio.h>
#include<mpi.h>

int main(int argc, char **argv) {
    MPI_Init(&argc, &argv);

    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    int num = 10;
    if (rank == 0) {
        num = 30;
    }
    printf("%d Process Reports : num = %d \n", rank, num);

    MPI_Bcast(&num, 1, MPI_INT, 0, MPI_COMM_WORLD);

    printf("%d Process Reports : num = %d \n", rank, num);

    MPI_Finalize();
}
