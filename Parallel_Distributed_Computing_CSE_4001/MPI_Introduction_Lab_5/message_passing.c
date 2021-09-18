#include <mpi.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
    int rank, size, len,message=999;
MPI_Init(&argc, &argv);
MPI_Comm_size(MPI_COMM_WORLD, &size);
MPI_Comm_rank(MPI_COMM_WORLD, &rank);
if (rank == 0) {
    MPI_Send(&message, 1, MPI_INT, 1, 0, MPI_COMM_WORLD);
    printf("1 SIZE = %d RANK = %d MESSAGE = %d \n",size,rank, message);
} else {
    int buffer;
    MPI_Status status;
    MPI_Probe(MPI_ANY_SOURCE, 0, MPI_COMM_WORLD, &status);
    MPI_Get_count(&status, MPI_INT, &buffer);
    if (buffer == 1) {
        printf("2 SIZE = %d RANK = %d MESSAGE = %d \n",size,rank, message);
        MPI_Recv(&message, buffer, MPI_INT, MPI_ANY_SOURCE, 0, MPI_COMM_WORLD, &status);
        if (rank + 1 != size) {
            MPI_Send(&message, 1, MPI_INT, ++rank, 0, MPI_COMM_WORLD);
        }}}
MPI_Finalize();
    return 0;
}
