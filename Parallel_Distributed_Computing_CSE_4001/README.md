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

