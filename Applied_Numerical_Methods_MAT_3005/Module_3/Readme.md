# Interpolation

**Module 3**


## 1 [Newton's Forward Interpolation Method](./newton_forward_interpolation.m)

* We will have to enter the independent (`X`), and the independent (`Y`) values.
* We will have to ensure that the intervals maintained by the `X` values is `uniform`.
* We will have to enter the query values for which we will compute the corresponding `y` value.
* We will have to ensure that the entered query falls in the first half of the `X` values.
* We will use the `x` query value and the first `X` value to find the `n` value. We also calculate the value of `h` or the interval between the independent variables 
* The code will compute the difference table, and then use it and the interpolation formula to find the value of the entered query.
* We will then display the `h`, `n`, the `difference table`, the terms of the `interpolation formula`, and the interpolated value of the entered query.


## 2 [Newton's Backward Interpolation Method](./newton_backward_interpolation.m)

* We will have to enter the independent (`X`), and the independent (`Y`) values.
* We will have to ensure that the intervals maintained by the `X` values is `uniform`.
* We will have to enter the query values for which we will compute the corresponding `y` value.
* We will have to ensure that the entered query falls in the second half of the `X` values.
* We will use the `x` query value and the last `X` value to find the `n` value. We also calculate the value of `h` or the interval between the independent variables 
* The code will compute the difference table, and then use it and the interpolation formula to find the value of the entered query.
* We will be forming a forward difference table as we did for the previous method, but the formula used here will be different.
* We will then display the `h`, `n`, the `difference table`, the terms of the `interpolation formula`, and the interpolated value of the entered query.


## 3 [Lagrange's Interpolation Method](./lagrange_interpolation.m)

* This method can be used for `non uniform` intervals of the independent variable `X`.
* This method is used to compute the interpolated `Y` value for a given `X` value.
* We will have to enter the independent (`X`), and the independent (`Y`) values.
* We will have to enter the query values `X_query` for which we will compute the corresponding `y` value.
* The code will display the `terms` of the `lagrange's interpolation formula`, and also the final function obtained as a summation of these terms.
* We then substitute the given `x_query` value in this function to get its corresponding interpolated `y` value, and then display these too.


## 4 [Lagrange's Inverse Interpolation Method](./lagrange_inverse_interpolation.m)

* This method can be used for `non uniform` intervals of the independent variable `X`.
* This method is used to compute the `X` value for a given interpolated `Y` value.
* We will have to enter the independent (`X`), and the independent (`Y`) values.
* We will have to enter the function query values `Y_query` for which we will compute the corresponding `x` value.
* The code will display the `terms` of the `lagrange's inverse interpolation formula`, and also the final function obtained as a summation of these terms.
* We then substitute the given `y_query` value in this function to get its corresponding interpolated `x` value, and then display these too.


## 5 [Newton's Divided Difference Interpolation Method](./newton_divided_difference_interpolation.m)

* We will have to enter the independent (`X`), and the independent (`Y`) values.
* This method can be used for `non uniform` intervals of the independent variable `X`.
* We will have to enter the query values for which we will compute the corresponding `y` value.
* The code will compute the `divided difference table`, and then use it and the interpolation formula to find the value of the entered query.
* We will then display the `divided difference table`, the terms of the `interpolation formula`, and the interpolated value of the entered query.


## 6 [Stirling's Central Interpolation Method](./stirling_interpolation.m)

* We will have to enter the independent (`X`), and the independent (`Y`) values.
* We will have to ensure that the intervals maintained by the `X` values is `uniform`.
* We will have to enter the query values for which we will compute the corresponding `y` value.
* This method is preferred if the query values lie towards the middle of the difference table.
* We will use the `x` query value and the first `X` value to find the `n` value. We also calculate the value of `h` or the interval between the independent variables 
* The code will compute the difference table as in the newton's interpolation method, and then use it with the interpolation formula to find the value of the entered query.
* We will then display the `h`, `n`, the `difference table`, the terms of the `interpolation formula`, and the interpolated value of the entered query.


## 7 [Cubic Spline Interpolation Method](./cubic_spline_interpolation.m)

* This method is used when we have a `piecewise continuous interpolation function`, with the continuous regions being between the values specified.
* For each interval, we will be forming a equation, and use this to interpolate any query values that lie within that region.
* We will have to enter the independent (`X`), and the independent (`Y`) values.
* We will have to ensure that the intervals maintained by the `X` values is `uniform`.
* We will have to enter the query values for which we will compute the corresponding `y` value.
* We will have to ensure that the query values falls under the region specified by the table values entered as above.
* We will use the `x` query value and the first `X` value to find the `n` value. We also calculate the value of `h` or the interval between the independent variables 
* The code will compute the `M` values for all the regions specified, use it in the interpolation equation for each of the region.
* We will then display the `h`, `n`, the `difference table`, the `interpolation equation for each interval` in the region, and the interpolated values of the entered query.
