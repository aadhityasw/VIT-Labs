# Apriori Algorithm - Associated Rule Mining


## Problem

Use the Hungarian News Clickstream dataset and perform the Associative Rule Mining using Apriori Algorithm and identify the most clicked upon site. Form Strong Rules of prediction with support and confidence threshold scores of greater than `50%`


## Steps

We will first obtain the dataset, we use the Hungarian Clickstream Dataset. We can directly import this and begin with our Rule Mining procedure, We will first observe the dataset, and as it is in the form of a Comma Separated File format, so we import it easily.

For the pre-processing part, we had observed that there were a few instance where “110” was marked as “0 11” and “116” as “0 6 11”, so we replace these terms by their correct values in the dataset, and now it is ready for applying the algorithm.

Now that the dataset is ready, we will proceed to the actual Rule Mining Process, we will in this lab use the Apriori Algorithm to perform the Associated Rule Mining.

The implementation of these algorithms is done in the Python Programming Language. We have utilised both the “apyori” python library, and as well as implemented the whole algorithm manually without the use of any library implementations.

After the model has trained on the data both using the library and the custom implementations, and the results look promising. They have been shown below in the results section. For the custom code, we have also implemented a few additional utitity function which are a part of the apriori algorithm like — “frequency”, “support” and “confidence”, and many others as visible in the code section below.

For the custom code implementation, we have first read the file, then taken the items and formed a item set using all the transactions in the dataset, then we have filtered these item sets by their support value which should be greater than the threshold set in the question. We then extend it to form rules, we then filter these rules by their confidence scores. We perform the same process repeatedly to get higher order item sets and more complex rules which are extracted from the dataset. After training we here print the total number of rules and item sets, and also print a few rules to get a general idea about how rules look.

It is important to note here that the number of rules obtained by the library and the algorithm’s direct implementation have resulted in almost same number of 22lakhs. This proves the validity of our implementation of the algorithm.


The code that has delivered these results are present in the [Jupyter notebook file](./Apriori.ipynb) associated in this folder
