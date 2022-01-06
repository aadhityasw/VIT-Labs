#include<mpi.h>
#include<stdio.h>

int main(int argc, char** argv) {

    MPI_Init(&argc, &argv);

    int world_rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);

    if (world_rank == 0) {
        // We send a message
        int message = 121;
        MPI_Send(&message, 1, MPI_INT, 1, 0, MPI_COMM_WORLD);
    }
    else if (world_rank == 1) {
        // We recieve a message.
        int message;
        MPI_Recv(&message, 1, MPI_INT, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        printf("Process %d reporting : Message Recieved \t Message : %d.\n", world_rank, message);
    }

    MPI_Finalize();
}
