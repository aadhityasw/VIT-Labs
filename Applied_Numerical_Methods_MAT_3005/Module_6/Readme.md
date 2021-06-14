# Numerical Solutions to Partial Differential Equation

**Module 6**


## 1 [Solving Second Order PDE of Elliptic Nature](./solving_elliptic_equation.m)

* This code is used to perform the iterations in solving the PDE of elliptic nature.
* We would have to calculate the initial values manually and feed in the complete grid in order for this code to work.
* The initial approximation can be made using either the `SFPF` or `DFPF` (Diagonal Five Point Formula).
* This code will only use the `SFPF` method for approximating the internal values given the actual boundary values.
* The code will print the grid at the end of every iteration.
* The code will proceed for any number of arbitrary iterations as we state.
