# System of Linear Equations and Eigen Value Problems

**Module 2**


## 1. [Gauss Seidal Method](./gauss_seidal_method.m)

* We will have to enter the adjacency or the Coefficient matrix into `A`, which we obtain by extracting the coefficients from the system of linear equations.
* We will have to ensure that this matrix `A` is diagonally dominant, which is a condition for this method to function properly.
* We also feed in the RHS values into `b`.
* We also need to key in the initial solution that we can decide upon based on the question in hand.
* We should also enter the `accuracy_decimal`, which is the decimal place accuracy to which answer should be obtained, the number of iterations taken by the code depends on this value.
* To prevent the non-convergence condition, the code will proceed till a maximum of `20 iterations` is reached.
* The code prints the `estimated value` at the `end of every iteration` along with the `error` which is also essential in this method.


## 2. [Triangulation (LU Decomposition) Method](./lu_decomposition_method.m)

* We will have to perform an `LU Decomposition` of the coefficient matrix `A` and feed them into `L` and `U` for the Lower and the Upper diagonal Matrices respectively.
* Though this process can be automated by the `lu()` function, the results obtained here does not match with the ones obtained by the method followed by us currrently. Using that too should yield you the same end result, but I am currently also focussed more on the output of each step than the final result.
* We will have to ensure that all the leading sub-matrices of the matrix `A` has a non-zero determinant.
* We also feed in the RHS values into `b`.
* The code prints the `L inverse`, `Z` where `Z=L_inv*b`, `U inverse`, and the final result `X`.


## 3. [Thomas (Tri-diagonal) Method](./thomas_method.m)

* We will have to enter the adjacency or the Coefficient matrix into `A`, which we obtain by extracting the coefficients from the system of linear equations.
* We have to ensure that `A` is a tri-diagonal system.
* We also feed in the RHS values into `b`.
* The code prints the `d`-- diagonal elements, `a` -- upper diagonal elements, `b` -- lower diagonal elements, `r` -- rhs or residue values, the `a`, and `r` values during the `Forward elimination` step,  the `x` values during the `Backward Substitution` step, and the final `X` values which is the solution to the system of equations.


## 4. [Power Method](./power_method.m)

* We will have to enter the  matrix into `A`.
* We also need to key in the initial solution into `X_cur` that we can decide upon based on the question in hand.
* We should also enter the `accuracy_decimal`, which is the decimal place accuracy to which answer should be obtained, the number of iterations taken by the code depends on this value.
* To prevent the non-convergence condition, the code will proceed till a maximum of `20 iterations` is reached.
* The code displays the `P`, `X`, and the normalzing value which is the maximum value among the `P` values, all for every iteration.
* The final `X_cur` displayed is the `dominant eigen value` of the entered matrix


## 5. Jacobi Method

`Coming Soon`
