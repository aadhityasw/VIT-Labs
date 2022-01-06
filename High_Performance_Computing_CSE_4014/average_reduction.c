#include<stdio.h>
#include<mpi.h>
#include<stdlib.h>


float* create_random_numbers(int num_elements) {
    float *arr = (float *)malloc(sizeof(float) * num_elements);
    for (int i=0; i < num_elements; i++) {
        arr[i] = rand() / (float)RAND_MAX;
    }
    return arr;
}


int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);

    int num_elements_per_process = 3;

    int rank, world_size;
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    float *arr=NULL;
    if (rank == 0) {
        arr = create_random_numbers(num_elements_per_process * world_size);
    }

    float* sub_array = (float *)malloc(sizeof(float) * num_elements_per_process);
    MPI_Scatter(arr, num_elements_per_process, MPI_FLOAT, sub_array, num_elements_per_process, MPI_FLOAT, 0, MPI_COMM_WORLD);

    float local_sum = 0.f;
    for (int i=0; i < num_elements_per_process; i++) {
        local_sum += sub_array[i];
    }

    float global_sum = 0.f;
    MPI_Reduce(&local_sum, &global_sum, 1, MPI_FLOAT, MPI_SUM, 0, MPI_COMM_WORLD);

    if (rank == 0) {
        float avg_parallel = global_sum / (world_size * num_elements_per_process);
        printf("Average computed in parallel : %f\n", avg_parallel);
    }

    MPI_Finalize();
}
