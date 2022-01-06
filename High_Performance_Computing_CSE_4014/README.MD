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

