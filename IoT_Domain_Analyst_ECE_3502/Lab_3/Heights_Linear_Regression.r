weight <-c (150,180,140,128,133,152,131)
height <-c (62,84,55,52,54,63,53)
model <- lm (height ~ weight)
print (model)


test <- data.frame (weight = 165)
result <- predict (model , test)
print (result)

plot ( weight, height, col = "red", main = "Example of Linear Regression" , abline (lm(height~weight)), cex = 1.3, pch = 16, xlab = "Weight" , ylab = "Height")
