# Page Ranking

Before moving on to the actual question, we need to first model the graph given to us. In order to do so, we form an adjacency matrix for the graph shown above. This is available in the code section for reference.


Now to move on to the first part of the question, we will use the networkX library to model the graph, and then use the page rank function available in this library to compute the page ranks of these vertices. We use a Directed Graph here because the like which connect one web page to another is just in one direction, and there is no need for a link to be in both ways.

Now for the second part of the question, we are to validate the results obtained in the first half by implementing the actual page rank algorithm which was present inside the back box representation used above because of the networkX library. In order to do this we first find all the in-bound and the out-bound connections for all the vertices of the graph, decide on a particular error tolerance level for the convergence, and also fix the maximum number of iterations to perform in case the values do not seem to converge.

The formula to calculate the page rank for a vertex in an iteration is as follows :

```
PR(u) = \sum_{v \in B_u} \frac{PR(v)}{L(v)}
```

where `B_u` denotes the list of all the in-bound nodes to the node u. 
    `PR(v)` denote the Page Rank of the node v.
    `L(v)` denote the number of out-bound nodes from the node v.
