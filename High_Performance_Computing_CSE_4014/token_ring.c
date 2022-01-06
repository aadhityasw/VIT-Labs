#include<mpi.h>
#include<stdio.h>

int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);

    int myRank;
    MPI_Comm_rank(MPI_COMM_WORLD, &myRank);

    int worldSize;
    MPI_Comm_size(MPI_COMM_WORLD, &worldSize);

    int token = 10;

    if (myRank > 0) {
        MPI_Recv(&token, 1, MPI_INT, myRank-1, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        printf("%d Recieved token %d, from system %d.\n", myRank, token, myRank-1);
    }

    MPI_Send(&token, 1, MPI_INT, (myRank+1) % worldSize, 0, MPI_COMM_WORLD);

    if (myRank == 0) {
        MPI_Recv(&token, 1, MPI_INT, worldSize-1, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        printf("%d Recieved token %d, from system %d.\n", myRank, token, worldSize-1);
    }

    MPI_Finalize();
}
