# K Means Clustering

## Problem

Use the IMDB Movie review dataset and perform the Clustering process and identify the popular terms in the clusters. Use the IMDB Movie review dataset and perform the Clustering process and identify the popular terms in the clusters.


## Steps

We will first obtain the dataset from Kaggle, we use the IMDB 50k Movie Review Dataset. We can directly import this and begin with our Classification procedure, but we will first observe the dataset, pre-process it and save it into a Comma Separated File format, so as to import it easily.

For the pre-processing part, we had observed that there were a few hyperlinks and other symbols, emoji’s etc in the reviews denoting the emotion of the comment. We will just be removing such tokens, as they do not contribute to the sentiment. We will also perform other pre-processing steps like removing numbers, conversion to lower case, removing stop words, etc.

Now that the dataset is ready, we will proceed to the actual Classification Process, we will in this lab use the K-Means Algorithm to perform text analysis on the data to predict the sentiment that is wished to be conveyed. We will before using this, apply the TF-IDF Vectorizer on the reviews in order to form a large TF-IDF matrix which is then fed into the K-Means algorithm.

The implementation of these algorithms is done in the Python Programming Language. The implementation of the TF-IDF, and the K-Means is used from the sk-learn package which provides an extensive set of library functions for this purpose.

After the model has trained on the TF-IDF, we have tested it on a few sentences, and the results look promising. They have been shown below in the results section. We have used 2 clusters because the model also has 2 classes of output — positive or negative. We have also found and displayed the top words in all the clusters.

The code that has delivered these results are available in the [python notebook](./K_Means.ipynb) associated with this folder.

I have also added the trained [model file](./model.pkl) in this folder.
