# Web Crawlers Using beautiful Soap

## Question 1 :

Given a root URL, e.g., "Vit.ac.in", Design a simple crawler using Python to return all pages that contains a string "admissions" from this site

### Steps

We use the BeautifulSoup library of Python in order to parse through the response. 
We use the Requests library of Python in order to make the web page requests.
We use the RE library of Python for pattern matching irrespective of the case or capitalisation of the content in the website.


## Question 2 : 

Find documents that contain the word “Data” and the word “analytics” within the URL “Vit.ac.in” using Python.

### Steps

We use the BeautifulSoup library of Python in order to parse through the response. We use the Requests library of Python in order to make the web page requests.
We use the RE library of Python for pattern matching irrespective of the case or capitalisation of the content in the website.
After we get the root URL’s web page, we take all the anchor tags from the parsed structure, and then retrieve the anchor tag’s `href` property which holds the link for the other pages.
Using these links, we perform a get request to these pages and save only the links which have the words “data" and “analytics” somewhere in its document.
We use regular expression to find if a page contains the required words or not.
During the process of making such requests, there is a chance of failure like due to SSL certificate authentication and verification, or just a bad time to connect to the server in some cases.



## Question 3 :

Find documents that contain the word “Programme” but not the word “programming” within the URL “Vit.ac.in” using Python.


### Steps

We use the BeautifulSoup library of Python in order to parse through the response. We use the Requests library of Python in order to make the web page requests.
We use the RE library of Python for pattern matching irrespective of the case or capitalisation of the content in the website.
After we get the root URL’s web page, we take all the anchor tags from the parsed structure, and then retrieve the anchor tag’s `href` property which holds the link for the other pages.
Using these links, we perform a get request to these pages and save only the links which have the words “data" and “analytics” somewhere in its document.
We use regular expression to find if a page contains the word “programme” or not. We similarly use it to ensure that the chosen pages do not contain the word “programming” in any form.
During the process of making such requests, there is a chance of failure like due to SSL certificate authentication and verification, or just a bad time to connect to the server in some cases. We also list these URL’s along with the output to demonstrate the efficiency of our algorithm and code.
