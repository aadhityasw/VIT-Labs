# Numerical Solution of Ordinary Differential Equation

**Module 5**


## 1 [Fourth Order Runge Kutta Method for First order ODE](./runke_kutta.m)

* This method is used for solving `First Order Ordinary Differential Equation`.
* We will have to enter the differential of function `f` -- `df / dx` in terms of the variable `x`, and `y`.
* We will have to enter the `x0` and its corresponding function value `f(x0)` in `y0`.
* We will have to enter the query value of `x` for which the function value needs to be determined.
* We will have to enter the `h` value.
* The code will perform iterations until we reach the provided query value, and at the end of the iterations, we end up with this value.
* For each iterations, we calculate the `k1` till `k4`, and also the `k` value. We then use this to update the `x_cur` and `y_cur` which were initially `x0` and `y0`.
* The code displays all these values for every iterations, as it computes them.
* The final `y_cur` value displayed by the code is our final result or the function value corresponding to the entered `x_query` value.


## 2 [Fourth Order Runge Kutta Method for Second order or Simultaneous First order ODE](./simultaneous_runke_kutta.m)

* This method is used for solving `Second Order Ordinary Differential Equation`, or a system of `Simultaneous First Order Ordinary Differential Equations`.
* For solving second order equation, we form two equations one for `dy / dx` and the other as `dz / dx` where `z = dy / dx`.
* We will have to enter the differential of functions `f` -- `dy / dx`, and `g` -- `dz / dx` in terms of the variable `x`, `y` and `z`.
* We will have to enter the `x0` and its corresponding function value `f(x0)` in `y0`, and its corresponding `g(x0)` in `z0`.
* We will have to enter the query value of `x` for which the function value needs to be determined.
* We will have to enter the `h` value.
* The code will perform iterations until we reach the provided query value, and at the end of the iterations, we end up with this value.
* For each iterations, we calculate the `k1` till `k4`, `l1` till `l4`, the `k` and `l` values which are then used to update the `x_cur`, `y_cur` and `z_cur` which were initially `x0`, `y0`, and `z0` respectively.
* The code displays all these values for every iterations, as it computes them.
* The final `y_cur` value displayed by the code is our final result or the function value corresponding to the entered `x_query` value.


## 3 [Adams Bashforth Moulton Predictor Corrector Method](./adam_bashforth_method.m)

* This method is used for finding the function value of any point given the function values of a few points before and the function of the differential `y'` in terms of `x` and `y`.
* This Method follows two steps -- `Predictor` and `Corrector` steps which take place in the same order.
* The corrector step is used to provide a more accurate function value of the point.
* Both these steps use the `y'` values found using the provided function, to find the required function values.
