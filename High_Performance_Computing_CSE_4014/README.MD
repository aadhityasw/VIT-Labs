# High Performance Computing - CSE4014



## Setup

There are two main frameworks which are necessary for proceeding with these labs -- `openmp` and `mpi`. Programming Experience with `C` language is also recommended to follow through.

I have performed the installation on a Mac OSX environment, and thus the installation process on other Operating systems would differ.

#### 1. Open MP :

* Installed using `GCC` Compiler

* I have installed `gcc-10` using homebrew in mac.

* Compilation
```bash
gcc-10 -fopenmp <file_name.c>
```

* Execution
```bash
./a.out
```

* To set the number of threads, run this command in the terminal before compiling the program.
```bash
export OMP_NUM_THREADS=<number of threads to use> 
```


#### 2. MPI :

* Installed `open-mpi` using 
```bash
brew install openmpi
```

* To Compile -
```bash
mpicc -o <output_file_name> <file_name>.c
```

* To Run -
```bash
mpirun -np <number_of_processors> <output_file_name>
```

* Default Compiler Location : `/usr/local/bin/mpicc`

* To create more than 2 processors :
```bash
mpirun -np 3 --oversubscribe a.out
```



## Index

1. [Fibonacci Series](./fibonacci_series.c)

In this, we use the Open MP constructs to use multiple threads to compute and store the fibonacci series in a parallel manner.


2. [Inter Process Communication - Introduction](./processor_details.c)

A template for MPI constructs, and a basic program to get a hang of different constructs used with MPI. <br>
We will also display the details of the processor in the system.


3. [MPI - Scatter and Gather Constructs](./average_scatter_gather.c)

A program to find the average of a few numbers using the `Scatter and Gather` constructs of `MPI`.


4. [MPI - Reduction](./average_reduction.c)

A program to find the average of a few numbers using the `Scatter and Reduce` constructs of `MPI`.


5. [MPI - Passing Integers](./send_recv_integers.c)

A program to send and recieve integers between two processes.


6. [MPI - Passing Strings](./send_recv_strings.c)

A program to send and recieve string messages between two processes.
Note : This program has not been written by me, but instead the author has been credited in the code.


7. [MPI - Message Passing with Probing](./probing.c)

A program to send and recieve string messages between two processes with probing using `MPI_Probe` and `MPI_Get_count` constructs.


8. [MPI - Passing Arrays](./send_recv_arrays.c)

A program to send and recieve arrays of integers between two processes.


9. [MPI - Message Broadcast](./broadcast.c)

A program to broadcast messages from one process to all other processes. This is mainly used for data synchronization among the processes and is achieved through the `MPI_Bcast` construct.


10. [MPI - Ping Pong](./ping_pong.c)

A program which will cause a message to bounce back and forth between two processes till a condition is met.


11. [MPI - Token Ring](./token_ring.c)

A program which will arrange multiple processes in the form of a ring and make a message float through them. The message passes from say `Process 1` through all other processes and returns back to `Process 1`.
