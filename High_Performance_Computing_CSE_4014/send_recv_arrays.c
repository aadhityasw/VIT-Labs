#include<mpi.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);
    const int MAX_NUMBERS = 100;

    int myRank;
    MPI_Comm_rank(MPI_COMM_WORLD, &myRank);

    if (myRank == 0) {
        // Send the array.
        int array[MAX_NUMBERS];

        // To send a random number of integers
        srand(time(NULL));
        int number_amount = (rand() / (float)(RAND_MAX)) * MAX_NUMBERS;
        MPI_Send(array, number_amount, MPI_INT, 1, 0, MPI_COMM_WORLD);

        printf("Process %d reporting : %d numbers sent.\n", myRank, number_amount);
    }
    else if (myRank == 1) {
        // Recieve the numbers

        int* arr;
        int number_count;
        MPI_Status status;

        MPI_Recv(arr, MAX_NUMBERS, MPI_INT, MPI_ANY_SOURCE, MPI_ANY_TAG, MPI_COMM_WORLD, &status);
        MPI_Get_count(&status, MPI_INT, &number_count);

        printf("Process %d reporting : %d numbers recieved.\n", myRank, number_count);
        printf("Source : %d, Tag : %d", status.MPI_SOURCE, status.MPI_TAG);
    }

    MPI_Finalize();
}
