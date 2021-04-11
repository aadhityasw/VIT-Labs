# HITS Algorithm



Before moving on to the actual question, we need to first model the graph given to us. In order to do so, we form an adjacency matrix for the graph shown above. This is available in the code section for reference.
<br>
Now to move on to the first part of the question, we will use the networkX library to model the graph, and then use the hits function available in this library to compute the authority and the hub scores of these vertices. We use a Directed Graph here because the like which connect one web page to another is just in one direction, and there is no need for a link to be in both ways.
<br>
Now for the second part of the question, we are to validate the results obtained in the first half by implementing the actual HITS algorithm which was present inside the back box representation used above because of the networkX library. In order to do this we first find all the in-bound and the out-bound connections for all the vertices of the graph, decide on a maximum number of iterations to perform in case the values do not seem to converge.
<br>
The formula to calculate the page rank for a vertex in an iteration is as follows :
* Authority(u) = ∑v∈Iu Hub(u) 
* Hub(u) = ∑v∈Ou Authority(u) 
where : Iu denotes the list of all the in-bound nodes to the node u. 
        Ou denotes the list of all the out-bound nodes to the node u. 
        Authority(v) denote the Authority score of the node v. 
        Hub(v) denote the Hub score of the node v.
<br>
We will also be performing normalisation of the values which follows the process of dividing each value of the authority score by the square root of the sum of squares of all the authority values. A similar procedure is followed for the hub scores as well.
<br>
We use this formula for the calculating the Hub and the Authority scores.
<br>
We can now conclude by the results obtained from both the methods that the first method was in fact valid and had produced the correct result.


## Question 1

The result is the following with the page with the highest Authority score in the front : `2 > 4 = 3 >1`
The result is the following with the page with the highest Hub score in the front : `1 = 3 > 4 > 2`


## Question 2

The result is the following with the page with the highest Authority score in the front : `A> C > B > D`
The result is the following with the page with the highest Hub score in the front : `D> B > C >A`
