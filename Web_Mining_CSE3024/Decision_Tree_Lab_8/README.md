# Cleveland Heart Diesase Predictor


We will first obtain the dataset from the UCI repository, we here use the Cleveland Heart Disease Dataset. After doing this, we can notice that this is with a “data” extension. We can directly import this and begin with our Classification procedure, but we will first observe the dataset, pre-process it and on the way convert it into a Comma Separated File format, so as to import it easily.
<br>
For the pre-processing part, we had observed that there were a few “?” Mark signs which indicated the absence of values or NULL values. One remedy is to replace this with the mean of all the values of that column, but we will just be removing such instance from the dataset, as there were a very few such cases. Then we will convert the datatype of all the rows to match their data, we have one column “old peak” which contains float values, and the rest are integers. So we convert them accordingly and then store this modified dataset into a CSV file.
<br>
Now that the dataset is ready, we will proceed to the actual Classification Process, we will in this lab deal with two algorithms of the Decision Tree namely the ID3 or the Iterative Dichotomiser 3 which uses information gain which in turn depends on the entropy calculation in order to find the best set of features in every stage of the algorithm. The other algorithm used here is CART or Classification and Regression Trees which in turn uses the Gini Index for the feature selection process during the phases of the algorithm. The procedure followed by both these algorithms is similar and they differ only be the feature selection process they use.
<br>
The implementation of these algorithms is done using the Scikit Learn Libraries in the Python Programming Language. We have first performed a 80%-20% train-test split of the complete dataset, and then we have used the training set to train the decision tree classifiers, and then the test set to evaluate the models. All the functions that have been used here has been imported from the sk-learn library as mentioned before.
<br>
The testing phase accuracy obtained by the model (55% and 60%) respectively.
Based on all these parameters, we can conclude that the CART model which uses the Gini Index performs slightly better than the ID3 model which uses the traditional information gain in this scenario.

## References Used

* Dataset Used
	* https://archive.ics.uci.edu/ml/machine-learning-databases/heart-disease/processed.cleveland.data

* Research paper on the heart disease dataset
	* https://www.sciencedirect.com/science/article/pii/S2352914820300125

* Decision Tree Explanation
	* https://towardsdatascience.com/decision-trees-for-classification-id3-algorithm-explained-89df76e72df1
	* https://towardsdatascience.com/a-guide-to-decision-trees-for-machine-learning-and-data-science-fe2607241956

* Decision tree from scratch
	* https://towardsdatascience.com/id3-decision-tree-classifier-from-scratch-in-python-b38ef145fd90
	* https://www.geeksforgeeks.org/decision-tree-implementation-python/

* Decision tree based on sklearn
	* https://www.datacamp.com/community/tutorials/decision-tree-classification-python
