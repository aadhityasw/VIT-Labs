# Population Proportion and Small Samples (Lab 9)

Aim for Small Samples : To test the difference of means for small sample using t-test.


### 1. [Elections](./elections.r)

Suppose 6% of citizens voted in last election 85 out of 148 people in a telephone survey said that they voted in current election. At 0.05 significance level can we reject the null hypothesis that the population of votes in the population is above 60% this year?<br>
H0 : P>0.6<br>
H1 : P<=0.6<br>


### 2. [Apple Harvestation](./apple_harvestation.r)

Suppose that 12% of apples harvested in a orchard last year was rotten 30 out of 214 apples in a harvest turns out to be rotten. At 0.05 significance level can we reject the null hypothesis that the population of the rotten apples in the harvest stays below 12% this year?<br>
H0 : P<0.12<br>
H1 : P>=0.12<br>


### 3. [Salmonella Outbreak](./> x=c(0.593, 0.142, 0.329, 0.691, 0.231, 0.793, 0.519, 0.392, 0.418)
> xbar=mean(x)
> alpha=0.05
> mu=0.3
> sd=sqrt(var(x))
> n=length(x)
> t=abs(xbar-mu)/(sd/sqrt(n))
> t
[1] 2.205059
> tv=qt(1-alpha, df=n-1)
> tv
[1] 1.859548
> if(t<=tv){print("Accept H0")}else{print("Reject H0")})

An outbreak of a salmonella related illness was attributed to ice produced in a certain factory. Scientists measured the level of Salmonella in 9 randomly sampled batches of ice cream. The level of MPN is give as follows :<br>
`0.593, 0.142, 0.329, 0.691, 0.231, 0.793, 0.519, 0.392, 0.418`<br
Is there evidence that the mean level of Salmonella in ice cream is greater than 0.3 MPN/g?<br>
H0 : mu=0.3<br>
H1: mu>0.3



### 4. [Intelligence](./intelligence.r)

Suppose that 10 volunteers have taken an intelligence test, here are the results obtained. The average score of the entire population in 75 in the same test. Is there any significant difference with 95% significance level, between the sample and population means assuming that the variance of the population is known.<br>
`Score  :  65, 78, 88, 55, 45, 95, 66, 57, 79, 81`<br>
H0 : xbar=mu<br>
H1 : xbar!=mu<br>

