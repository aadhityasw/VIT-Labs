Y = c(110, 80, 70, 120, 150, 90, 70, 120)
X1 = c(30, 40, 20, 50, 60, 40, 20, 60)
X2 = c(11, 10, 7, 15, 19, 12, 8, 14)
df = data.frame(Y, X1, X2)
df

View(df)
regmodel<-lm(Y~X1+X2, data=df)
regmodel