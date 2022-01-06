#include<mpi.h>
#include<stdio.h>

int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);

    int world_size;
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);

    int world_rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);

    char processor_name[MPI_MAX_PROCESSOR_NAME];
    int processor_name_length;
    MPI_Get_processor_name(processor_name, &processor_name_length);

    printf("Hello from processor %s, we now have a rank of %d out of %d processors.\n", processor_name, world_rank, world_size);

    MPI_Finalize();
}
