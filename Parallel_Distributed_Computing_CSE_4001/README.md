# Parallel and Distributed Computing - CSE4001


## Setup


### 1. Open MP :

Using GCC Compiler

I have installed gcc-10 using homebrew. This can be followed for any macos systems.

* To compile using this new Compiler :

```bash
gcc-10 -fopenmp <file_name.c>
```

* To execute the file :

```bash
./a.out
```

* To set the number of threads, run this command in the terminal before compiling the program.

```bash
export OMP_NUM_THREADS=<number of threads to use> 
```


### 2. MPI :

Installed open-mpi using

```bash
brew install openmpi
```

* To Compile -

```bash
mpicc -o <output_file_name> <file_name.c>
```

* To Run -

```bash
mpirun -np <number_of_processors> <output_file_name>
```

* The Compiler path is usually `/usr/local/bin/mpicc`, this can be useful if you have multiple compilers.




## List of Programs

#### 1. [Open MP - Introduction](./OpenMP_Introduction_Lab_1)

| S.no | Name of the Experiment |
| ---- | --------------------- |
| 1 | [Hello World Parallelization](./OpenMP_Introduction_Lab_1/hello_world.c) |
| 2 | [Array Sum](./OpenMP_Introduction_Lab_1/array_sum.c) |


#### 2. [Open MP - Exploring Constructs](./OpenMP_Constructs_Lab_2)

| S.no | Name of the Experiment |
| ---- | --------------------- |
| 1 | [Find Factorial of Multiple Numbers](./OpenMP_Constructs_Lab_2/factorial.c) |
| 2 | [Exploring Single Construct](./OpenMP_Constructs_Lab_2/single_construct.c) |
| 3 | [Array Sum](./OpenMP_Constructs_Lab_2/array_sum.c) |
| 4 | [Matrix Multiplication](./OpenMP_Constructs_Lab_2/matrix_multiply.c) |
| 5 | [Exploring Sections Construct](./OpenMP_Constructs_Lab_2/sections_construct.c) |
