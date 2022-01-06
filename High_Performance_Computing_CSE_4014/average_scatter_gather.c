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


float compute_average(float* arr, int num_elements) {
    float sum = 0.f;
    for (int i=0; i<num_elements; i++) {
        sum += arr[i];
    }
    sum = sum / num_elements;
    return sum;
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

    float sub_avg = compute_average(sub_array, num_elements_per_process);

    float* sub_avgs = NULL;
    if (rank == 0) {
        sub_avgs = (float *)(malloc(sizeof(float) * world_size));
    }
    MPI_Gather(&sub_avg, 1, MPI_FLOAT, sub_avgs, 1, MPI_FLOAT, 0, MPI_COMM_WORLD);

    if (rank == 0) {
        float avg_parallel = compute_average(sub_avgs, world_size);
        float avg_serial = compute_average(arr, world_size * num_elements_per_process);
        printf("Average computed in parallel : %f\n", avg_parallel);
        printf("Average computed in series : %f\n", avg_serial);
    }

    MPI_Finalize();
}
