age_rep = c(15, 25, 35, 45, 55, 65)
hours_spent = c(302.38, 193.63, 185.46, 198.49, 224.30, 288.71)
df = data.frame(age_rep, hours_spent)
df

plot(age_rep, hours_spent, type='b', col='red', main='Library', xlab='Age', ylab='Hours Spent')
