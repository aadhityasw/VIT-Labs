# Numerical Differentiation and Integration

**Module 4**


## 1. Differentiation by Newton's Forward Difference Formula

* We will have to enter the independent (`X`), and the independent (`Y`) values.
* We will have to ensure that the intervals maintained by the `X` values is `uniform`.
* We will have to enter the query values for which we will compute the corresponding `y` value.
* We will have to ensure that the entered query falls in the first half of the `X` values.
* We will use the `x` query value and the first `X` value to find the `n` value. We also calculate the value of `h` or the interval between the independent variables 
* The code will compute the difference table, and then use it and the interpolation formula to find the value of the entered query.
* We will then display the `h`, `n`, the `difference table`, the terms of the `interpolation formula`, and the interpolated value of the entered query.
* We will also display the function, its first and second differential values in terms of `n`.


## 2. Differentiation by Newton's Backward Difference Formula

* We will have to enter the independent (`X`), and the independent (`Y`) values.
* We will have to ensure that the intervals maintained by the `X` values is `uniform`.
* We will have to enter the query values for which we will compute the corresponding `y` value.
* We will have to ensure that the entered query falls in the second half of the `X` values.
* We will use the `x` query value and the last `X` value to find the `n` value. We also calculate the value of `h` or the interval between the independent variables 
* The code will compute the difference table, and then use it and the interpolation formula to find the value of the entered query.
* We will be forming a forward difference table as we did for the previous method, but the formula used here will be different.
* We will then display the `h`, `n`, the `difference table`, the terms of the `interpolation formula`, and the interpolated value of the entered query.
* We will also display the function, its first and second differential values in terms of `n`.


## 3. Differentiation by Newton's Divided Difference Formula

* We will have to enter the independent (`X`), and the independent (`Y`) values.
* This method can be used for `non uniform` intervals of the independent variable `X`.
* We will have to enter the query values for which we will compute the corresponding `y` value.
* The code will compute the `divided difference table`, and then use it and the interpolation formula to find the value of the entered query.
* We will then display the `divided difference table`, the terms of the `interpolation formula`, and the interpolated value of the entered query.
* We will also display the function, its first and second differential values in terms of `n`.


## 4. [Trapezoidal Rule Integration](./trapezoidal_rule.m)

* We will have to enter the function `f` in terms of the variable `x`.
* We will have to enter the lower (`a`), and the upper (`b`) limits of the function where the integral value needs to be calculated.
* We will have to enter the number of parts to divide the range (`num_parts`).
* The code will use this to calculate the `h` value, the table of values of `x`, and its correspoinding `f(x)` values.
* The code also consider the case of the getting infinity during substitution for which we use the `L' Hopitals` Rule.
* The values in this table will be used in the trapezoidal rule's equation to calculate the value of this integral.
* The code displays this final integral value, the `h` value, the values in the table, and the trapezoidal equation with the values substituted in their appropriate places.


## 5. [Simpson's One Third Rule Integration](./simpson_one_third.m)

* We will have to enter the function `f` in terms of the variable `x`.
* We will have to enter the lower (`a`), and the upper (`b`) limits of the function where the integral value needs to be calculated.
* We will have to enter the number of parts to divide the range (`num_parts`).
* The code will use this to calculate the `h` value, the table of values of `x`, and its correspoinding `f(x)` values.
* The code also consider the case of the getting infinity during substitution for which we use the `L' Hopitals` Rule.
* The values in this table will be used in the simpson's one third rule equation to calculate the value of this integral.
* The code displays this final integral value, the `h` value, the values in the table, and the trapezoidal equation with the values substituted in their appropriate places.


## 6. [Simpson's Three Eighth Rule Integration](./simpson_three_eighth.m)

* We will have to enter the function `f` in terms of the variable `x`.
* We will have to enter the lower (`a`), and the upper (`b`) limits of the function where the integral value needs to be calculated.
* We will have to enter the number of parts to divide the range (`num_parts`).
* The code will use this to calculate the `h` value, the table of values of `x`, and its correspoinding `f(x)` values.
* The code also consider the case of the getting infinity during substitution for which we use the `L' Hopitals` Rule.
* The values in this table will be used in the simpson's three eighth rule equation to calculate the value of this integral.
* The code displays this final integral value, the `h` value, the values in the table, and the trapezoidal equation with the values substituted in their appropriate places.


## 7. [Romberg's Method Integration](./romberg_method.m)

* We will have to enter the function `f` in terms of the variable `x`.
* We will have to enter the lower (`a`), and the upper (`b`) limits of the function where the integral value needs to be calculated.
* We will have to enter the `h` value which is the increase amount for the intervals between `a` and `b`.
* We will have to include our option of using the `Trapezoidal` or the `Simpson's One Third` rule into the `choice`. The final equation varies by this choice.
* We will have to enter the number of `iterations` though which we wish to proceed.
* The code will use this to calculate the table of values of `x`, and its correspoinding `f(x)` values.
* The code also consider the case of the getting infinity during substitution for which we use the `L' Hopitals` Rule.
* The values in this table will be used in the algorithm of our choice to calculate the value of this integral.
* After every iteration, we update the `h` value, and by default divide this by `2`.
* We proceed and tabulate the results of the above step for the required number of iterations, and thereby get an Integral value at the end of every iteration.
* After the iterations, we use all these Integral values and the choice of the algorithm to find a more accurate integral value, this is the main step of the `Romberg's Method`.
* The code displays the integral and the table values of every iteration, the `h` value of every iteration,  the trapezoidal equation with the values substituted in their appropriate places during the iterations.
* The code also displays the table of this method where the integral values are used to find a more appropriate values in the form of a table. The value on the top right is the final and the most accurate integral value, and thus the result of this method.


## 8. Two Point Gaussian Quadrature Formula Integration

* This code is used to find the vaue of a definite integral without performing integration of the function. It uses numerical methods for this purpose.
* We enter the `function` to be integrated and its upper and lower limits of integral.
* We calculate the required parameters of `c1`, `c2`, `x1`, and `x2` using the foumulas, apply them in the equation to calculate the actual value of the integral.
* The code will display the values of all these intermediate values used in the equation, and also the final integral value.
* The code also solves the integral by general integration and applies the limits to perform a verification for the results obtained.
* The code also displays the integrated function, and the solved value.
* The code uses these values to find the absolute error of the value found using this method, and displays it.


## 9. Three Point Gaussian Quadrature Formula Integration

* This code is used to find the vaue of a definite integral without performing integration of the function. It uses numerical methods for this purpose.
* This is a more accurate version of the method discussed above, as this uses three portions as opposed to two portions to the method discussed above
* We enter the `function` to be integrated and its upper and lower limits of integral.
* We calculate the required parameters of `c1`, `c2`, `c3`, `x1`, `x2`, and `x3` using the foumulas, apply them in the equation to calculate the actual value of the integral.
* The code will display the values of all these intermediate values used in the equation, and also the final integral value.
* The code also solves the integral by general integration and applies the limits to perform a verification for the results obtained.
* The code also displays the integrated function, and the solved value.
* The code uses these values to find the absolute error of the value found using this method, and displays it.

