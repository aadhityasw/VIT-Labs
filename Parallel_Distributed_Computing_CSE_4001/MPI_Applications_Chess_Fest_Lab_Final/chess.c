#include<mpi.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);

    int world_size;
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);

    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    int powerOfPlayers[world_size-1];
    for (int i = 0; i < world_size-1; i++) { 
        powerOfPlayers[i] = (int)(rand);
    }

    if (rank == 0) {
        // Master thread recieves the score.

        // We print the scores of the players.
        printf("The powers of the players are : \t");
        for (int i = 0; i < world_size-1; i++) { 
            printf("%d\t", powerOfPlayers[i]);
        }
        printf("\n");

        // Initialize the score board;
        int score_board[world_size-1];
        for (int i=0; i<world_size-1; i++) {
            score_board[i] = 0;
        }

        int total_matches = (world_size-1) * (world_size - 2) / 2;
        int match_winner;
        for (int i=0; i < total_matches; i ++) {
            // Recieving the winner of match 'i'
            MPI_Recv(&match_winner, 1, MPI_INT, MPI_ANY_SOURCE, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
            
            // Updating the score board.
            score_board[match_winner-1] ++;
        }

        // To find the winner of the tournament.
        int winner = -1;
        for (int i=0; i < world_size-1; i ++) {
            if (winner == -1) {
                winner = 0;
            }
            else {
                if (score_board[winner] < score_board[i]) {
                    winner = i;
                }
            }
        }

        // To print the winner of the tournament.
        printf("The Master thread reporting -- The winner of the tournament is : %d with %d wins.\n", (winner + 1), score_board[winner]);
    }
    else {
        // Each processor will play with the processors after it.
        for (int i = rank + 1; i < world_size; i ++) {
            // Now the match is between 'rank' and 'rank+i' processors.

            int winner;
            if (powerOfPlayers[rank-1] > powerOfPlayers[rank + i - 1]) {
                printf("%d Process Reporting : In match between %d and %d, %d has won the match.\n", rank, rank, (rank+i), rank);
                winner = rank;
                // Sending the winner's details to the master.
                MPI_Send(&winner, 1, MPI_INT, 0, 0, MPI_COMM_WORLD);
            }
            else {
                printf("%d Process Reporting : In match between %d and %d, %d has won the match.\n", rank, rank, (rank+i), (rank+i));
                winner = rank + i;
                // Sending the winner's details to the master.
                MPI_Send(&winner, 1, MPI_INT, 0, 0, MPI_COMM_WORLD);
            }
        }
    }

    MPI_Finalize();
}
