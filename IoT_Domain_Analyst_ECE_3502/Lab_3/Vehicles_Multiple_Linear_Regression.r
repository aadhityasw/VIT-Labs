data <- mtcars[, c ("mpg" , "disp", "hp")]
head (data)

model <- lm(mpg~disp + hp, data = data)
summary (model)

predict (model, newdata = data.frame (disp =140, hp = 80))
predict (model, newdata = data.frame (disp =160, hp = 70))

plot (model)
