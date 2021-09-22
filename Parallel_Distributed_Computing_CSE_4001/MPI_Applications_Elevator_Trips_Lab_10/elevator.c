#include <mpi.h> 
#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 
#include <unistd.h>
int main(int argc, char* argv[]) 
{ 
	int pid, np, 
		elements_per_process, 
		n_elements_recieved; 

	MPI_Status status; 
	MPI_Init(&argc, &argv); 
	MPI_Comm_rank(MPI_COMM_WORLD, &pid); 
	MPI_Comm_size(MPI_COMM_WORLD, &np); 
	if (pid == 0) { 
		int index, i; 
		int tmp;
		int maxVal = -1, maxInd;
		for (i = 1; i < np; i++) { 
			MPI_Recv(&tmp, 1, MPI_INT, 
					MPI_ANY_SOURCE, 0, 
					MPI_COMM_WORLD, 
					&status); 
			int sender = status.MPI_SOURCE;
			if(maxVal == -1 || maxVal < tmp){
				maxVal = tmp;
				maxInd = i;
			}
		}  
		printf("Elevator %d has completed maximum trips at the end of 30 minutes\n", maxInd); 
	} 
	else { 
		int cnt = 0;
		int timePassed = 0;
		srand(time(0));
		while(1){
			int st = (rand() % (7 + 1));
			int ed = (rand() % (7 + 1));
			if(timePassed + ed - st > 30){
				break;
			}
			cnt++;
			timePassed += (ed - st);
		}
		
		MPI_Send(&cnt, 1, MPI_INT, 
				0, 0, MPI_COMM_WORLD); 
	} 
	MPI_Finalize(); 
	return 0; 
}
