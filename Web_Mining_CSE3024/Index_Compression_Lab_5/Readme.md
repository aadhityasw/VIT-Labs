# Index Construction

## Question

Build the inverted index for the following documents:
ID1 : Selenium is a portable framework for testing web applications
ID2 : Beautiful Soup is useful for web scraping
ID3: It is a python package for parsing the pages

Perform Index Compression for the integer values in the inverted index (duplicates to be eliminated) using Elias delta coding and variable byte scheme .


## Steps

We will first pre-process the documents, and then split the documents into tokens or words. The pre-processing includes conversion to lower case, removal of numbers and other special characters, and stop word removal. After this we tokenise this document using the NLTK library.

After this we then take all these words after tokenisation and form a inverted index, which will include the word, and a list of occurrences in all the documents, and in each entry of this array would include the document number, number of times this word has occurred in this document, and also a list of offset position where the word occurs in the document.

Now for the second part of the question, we then extract all the numbers in this inverted index and then perform compression using the above stated two methods.
