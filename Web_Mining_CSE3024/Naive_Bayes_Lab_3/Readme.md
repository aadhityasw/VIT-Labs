# Naive Bayes

## Question

Write a Naïve Bayes Classifier in python without using any package for the following dataset.
* Note : The dataset is provided in the [Data.csv](./Data.csv) file
The following dataset gives the Term Frequencies of a few documents for the given keywords, and the last column gives the category of the document.

## Steps

We first enter the given data into a pandas data frame and save it as a CSV file for easier access.

Now we load the data stored earlier from the CSV file, then we get the list of all unique output labels, all the words provided to us in the dataset which are available in the document, and also get the total number of documents provided to us.

In the Naive Bayes process we use the Bayes rule which goes as follows :
`P(A/B) = P(B/A)P(A) / P(B)`

In our current case we have three output classes, so we would need to find :
`P(Politics / query), P(Sports / query), P(Business / query)`

And based on these three values, we choose the class with the maximum value and choose that as the appropriate category for the provided query.

Based on the above two formulae, we can infer that we would need to find the Probability of the occurrence of each output class.
`P(Output Class) = Number of documents that belong to the output class / Total number of document`

Now to the next part of the numerator `P(Query / Output Class)` , this can be calculated as the product of the Probabilities of the each word of the query belonging to that particular output class.
`P(Query / Output Class) = ∏ P(Word / Output Class)`

Now to find the probability of a word in the class :
P(Word / Output Class) = Number of times the word belongs to the output class / Total number of words that belong to the output class

We can now use all these formulas to calculate the numerator, in our present scenario we are more interested to know more about the class that the document belongs to, rather than the actual probability score for the document belonging to each class. So we will be ignoring the denominator for comparison reasons.

We can notice here that the other probabilities are zero, though in our current case we have the correct answer, but in some cases we might get a zero probability in all the classes if we encounter an unseen word, so we can apply many techniques and algorithms to solve this, but for now we will be applying Smoothing, and mainly Laplace smoothing in our current case.

This is the formula for `Laplace smoothing`, and we apply this when we find the
`P(Word / Output Class)`. This solves the problem of zeros in the conditional probability as we add a ALPHA value to the numerator, and to prevent the Probabilities from going greater than 1, we also ass a normalising factor to the denominator. When we assume the value of `ALPHA` as 1, we consider this as the Laplace Smoothing.
