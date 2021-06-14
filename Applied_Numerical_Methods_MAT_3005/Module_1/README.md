# Algebraic and Trancedental Equations

**Module 1**



### 1  [Iterative Method](./iterative_method.m)

* If we have a function `f(x)`, we will have to manually find a form `x = phi(x)`. This `phi(x)` is the function that is to be entered in the code.
* It is assumed that the function `phi(x)` passes the convergence condition in the provided interval.
* The code will display the first order differential of `phi(x)` which can be used to check the convergence condition.
* We will have to determine the interval where convergence takes place, and then enter the `x_ini` value into the code.
* We should also enter the `accuracy_decimal`, which is the decimal place accuracy to which answer should be obtained, the number of iterations taken by the code depends on this value.
* To prevent the non-convergence condition, the code will proceed till a maximum of `20 iterations` is reached.
* The code prints the `estimated value at the end of every iteration`.


### 2 [Secant Method](./secant_method.m)

* If we have an equation of the form `f(x) = 0`, we will have to enter the `f(x)` into the code.
* We will have to ensure that the function `f(x)` passes the convergence condition in the provided interval.
* We will have to determine the interval where convergence takes place, and then enter the `interval` into the code.
* We should also enter the `accuracy_decimal`, which is the decimal place accuracy to which answer should be obtained, the number of iterations taken by the code depends on this value.
* To prevent the non-convergence condition, the code will proceed till a maximum of `20 iterations` is reached.
* The code prints the `estimated value and the corresponding f(x) value at the end of every iteration`.


### 3 [Newton Raphson Method](./newton_raphson_method.m)

* If we have an equation of the form `f(x) = 0`, we will have to enter the `f(x)` into the code.
* We will have to ensure that the function `f(x)` passes the convergence condition in the provided interval.
* The code will display the first and the second order differentials of `f(x)` which can be used to check the convergence condition, and for the calculations.
* We will have to determine the interval where convergence takes place, and then enter the `interval` into the code.
* We should also enter the `accuracy_decimal`, which is the decimal place accuracy to which answer should be obtained, the number of iterations taken by the code depends on this value.
* To prevent the non-convergence condition, the code will proceed till a maximum of `20 iterations` is reached.
* In order to accomodate the `Newton Raphson Method for multiple roots`, we have incorporated a genralized version into the code. We have provided a `m` value which we should enter into the code, and it determines the `number of occurance of root to be found`. For example to find a double root we say m=2, for triple root m=3, and so on.
* The code prints the `estimated value and the corresponding f(x) value at the end of every iteration`.


### 4 [Newton Method for System of Non-Linear Equations](./non_linear_system.m)

* Given a system of multiple non-linear equations, we solve them.
* We enter the system of functions, and the initial values of these variables `x`, `y`, etc.
* We then find the `Jacobian Matrix` and use it for the iteration in finding a better estimate for the values of the variables.
* In each iteration, the code will display the substituted `Jacobian matrix`, its inverse and the values of the variables.
* The code will display the solution to the system of equations.
