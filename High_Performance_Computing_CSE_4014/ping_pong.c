#include<mpi.h>
#include<stdio.h>
#include<string.h>

int main(int argc, char** argv) {

    MPI_Init(&argc, &argv);

    int world_rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);

    const int PING_PONG_COUNT = 10;

    for (int i = 0; i < PING_PONG_COUNT; i ++) {

        if (world_rank == 0) {
            // We send ping and recieve pong.
            char* send_message = "ping";
            MPI_Send(send_message, strlen(send_message), MPI_CHAR, 1, 0, MPI_COMM_WORLD);

            char recv_message[5];
            MPI_Recv(recv_message, 4, MPI_CHAR, 1, 1, MPI_COMM_WORLD, MPI_STATUS_IGNORE);

            printf("Process %d reporting : %s.\n", world_rank, recv_message);
        }
        else if (world_rank == 1) {
            // We recieve ping and send pong.

            char recv_message[5];
            MPI_Recv(recv_message, 4, MPI_CHAR, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
            
            printf("Process %d reporting : %s.\n", world_rank, recv_message);

            char* send_message = "pong";
            MPI_Send(send_message, strlen(send_message), MPI_CHAR, 0, 1, MPI_COMM_WORLD);
        }
    }

    MPI_Finalize();
}
