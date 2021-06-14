# Lab 3


## List of Programs

### 1. [Height Prediction using Linear Regression in R](./Heights_Linear_Regression.r)

* To build a Regression model in the R programming language that predicts the height of a person given their weight.
* In order to create such a prediction model, we first train the regression model with the available dataset containing the heights and the weights, and once this is complete, the model would have learnt the co-relation between the heights and the weights.
* We can then use this trained model, and feed in our query weight, and the model will predict the corresponding height of the person based on the knowledge obtained during the training phase.
* We also plot a regression line or the best fit line after the model has finished the training phase to demonstrate the results of the training phase.


### 2. [Vehicle Mileage Prediction with Multiple Linear Regression in R](./Vehicles_Multiple_Linear_Regression.r)

* To create a Multiple Linear Regression model to predict the Miles run by the vehicle based on the Horse Power of the vehicle and the displacement values in the R programming Language.
* In order to create such a prediction model, we first train the regression model with the available dataset of the MTCARS containing all the required details, and once this is complete, the model would have learnt the co-relation between the parameters and the target variable.
* We then use this knowledge obtained to predict the Miles run by the vehicle based on the Horse Power of the vehicle and the displacement values. We use the default R predict function of the created model to make predictions miles run by the vehicle.
* We then plot this co-relation on a graph to both test the validity of the training process, and also to gain insights about the task in hand through visualisations.
* The result for the obtained code displays the miles run by the vehicle when its horse power capacity and the displacement values are fed into the model.


### 3. [Linear Regression in Python](./Linear_Regression.py)

* To find the co-relation between a set of 2D points, and thereby use it to find the slope of the Line and to create a regression model for the same.
* In order to create such a prediction model, we first train the regression model with the available dataset containing the x and the y co-ordinates, and once this is complete, the model would have learnt the co-relation between the co-ordinates.
* We then use this knowledge obtained to calculate the point of intersection of the line, the slope of the line and the coefficient of determination of the line.
* We use the predict function of the created model to make predictions for the y co- ordinate given the point’s x-coordinate, and given that the point lies in the regression line.
* We then test the validity of the prediction result obtained before by using the previously obtained coefficient and intercept values, and using it to manually predict the y co-ordinate given the x co-ordinate.
* The result for the  code displays the slope of the regression line obtained after the training phase, and also the prediction values for the test point. It shows the validity of the predict function, as the values obtained here are the same as when the calculations are done manually. We also see how the Linear Regression model function works different if we change the dimensionality of the x or y values. We then go ahead and find the first few points of the line from the intercept up in the first quadrant.



## Tools used

* R Compilation
Online :    https://rextester.com/l/r_online_compiler

* Python Compilation
Online :    https://pythonbaba.com/online-python-code-editor-and-ide-for-data-science/
