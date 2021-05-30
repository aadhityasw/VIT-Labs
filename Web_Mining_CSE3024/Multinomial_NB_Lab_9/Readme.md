# Multinomial Naive Bayes Classifier


## Problem

Write a Python program to classify the given twitter dataset describing tweets on U.S airlines into positive, neutral and negative classes.


## Steps

We will first obtain the dataset from Kaggle, we use the U.S airlines twitter sentiment Dataset. We can directly import this and begin with our Classification procedure, but we will first observe the dataset, pre-process it and save it into a Comma Separated File format, so as to import it easily.

For the pre-processing part, we had observed that there were a few “@”, and “#” signs which indicated the users and topics values. We will just be removing such tokens, as they do not contribute to the sentiment. We store this modified dataset into a CSV file.

Now that the dataset is ready, we will proceed to the actual Classification Process, we will in this lab use the Multinomial Naive Bayes Classifier Algorithm to perform text analysis on the data to predict the sentiment that is wished to be conveyed.

The implementation of these algorithms is done in the Python Programming Language. We have first performed a 80%-20% train-test split of the complete dataset, and then we have used the training set to train the decision tree classifiers, and then the test set to evaluate the models. All the functions that have been used here has been written by us, with minimal usage of external libraries.

As the text processing used is not of the best quality, we have obtained mixed results. We have about 40% Train accuracy and nearly 95% accuracy in the unseen test dataset. This means that the algorithm works best with unseen data which is the target of our approach.

The codes are present in two notebooks one for the [pre-processing](./Data_Preprocessing.ipynb) and the other for the [classifier model building](./Multinomial_NB.ipynb).
