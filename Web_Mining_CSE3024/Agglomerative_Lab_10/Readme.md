# Agglomerative Clustering

## Problem

Perform Agglomerative Clustering and plot dendrogram for the Credit Card Fraud dataset.


## Steps

We will first obtain the dataset from Kaggle, we use the Credit Card Dataset. We can directly import this and begin with our Classification procedure, but we will first observe the dataset, pre-process it and save it into a Comma Separated File format, so as to import it easily.

We have analysed the dataset and have performed the necessary pre-processing steps like filling NULL values by the mean value of the column, dropping the columns which do not contribute to the predictions, perform log transformations for better analysis and model training accuracy, normalisation and standardisation of the values.

Now that the dataset is ready, we will proceed to the actual Classification Process, we will in this lab use the Agglomerative Clustering Algorithm  which is a type of Hierarchical Clustering to perform text analysis on the data. The implementation of these algorithms is done in the Python Programming Language. The implementation of the Agglomerative clustering is used from the sk-learn package which provides an extensive set of library functions for this purpose.

We have then used the Matplotlib library and the SciPy library to plot the dendrogram for the hierarchical clustering done previously. We can notice that the SciPy library has a dendrogram function which is used after forming the linkage matrix from the model trained before. The dendrogram is shown in the results section below.


After the Agglomerative Clustering model is trained and fit on the dataset, we can use the SciPy library to plot the dendrogram for the model trained.

The code that has delivered these results are availibe in the [Jupyter notebook file](./Agglomerative.ipynb) associated with this folder.
