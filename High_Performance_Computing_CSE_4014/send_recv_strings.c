/**
 * @author RookieHPC
 * @brief Original source code at https://www.rookiehpc.com/mpi/docs/mpi_char.php
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mpi.h>
 
/**
 * @brief Illustrate how to communicate a string between 2 MPI processes.
 * @details This application is meant to be run with 2 MPI processes: 1 sender
 * and 1 receiver. The former sends a string to the latter, which prints it.
 **/
int main(int argc, char* argv[])
{
    MPI_Init(&argc, &argv);
 
    // Check that 2 MPI processes are used.
    int size;
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    if(size != 2)
    {
        printf("This application is meant to be run with 2 MPI processes.\n");
        MPI_Abort(MPI_COMM_WORLD, EXIT_FAILURE);
    }
 
    // Get my rank and do the corresponding job.
    enum role_ranks { SENDER, RECEIVER };
    int my_rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);
    switch(my_rank)
    {
        case SENDER:
        {
            // Sends the string
            char stringToSend[] = "Hello world";
            printf("[MPI process %d] I send string: \"%s\".\n", my_rank, stringToSend);
            MPI_Ssend(stringToSend, strlen(stringToSend), MPI_CHAR, RECEIVER, 0, MPI_COMM_WORLD);
            break;
        }
        case RECEIVER:
        {
            // Receives the string
            char stringReceived[12];
            stringReceived[11] = '\0';
            MPI_Recv(stringReceived, 11, MPI_CHAR, SENDER, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
            printf("[MPI process %d] I received string: \"%s\".\n", my_rank, stringReceived);
            break;
        }
    }
 
    MPI_Finalize();
 
    return EXIT_SUCCESS;
}
