info = read.csv(file.choose())
info

info['Income']

info$Income

info$Gender = factor(info$Gender, labels = c('Female', 'Male'))
info

info$Married = factor(info$Married, labels = c('Unmarried', 'Married'))
info

summary(info)

infomarried = subset(info, info$Married=='Married')
infomarried

table1 = table(info$Gender)
table1

table2 = table(info$Gender, info$Age)
table2

plot(info$Subject, info$Age, type = 'b', main = "Age of people", xlab = 'Subject', ylab = 'Age')

plot(info$Subject, info$Age, type = 'l', main = "Age of people", xlab = 'Subject', ylab = 'Age', col = 'red')

pie(table1)

barplot(table2)

barplot(table2, col=c('Blue', 'Red'), beside=T)

barplot(table2, col=c('Blue', 'Red'), beside=F)

barplot(table2, col=c('Blue', 'Red'), beside=T)
legend('topright', legend=row.names(table2), fill = c('blue', 'red'))

barplot(table2, col=c('Blue', 'Red'), beside=T)
legend('topright', legend=row.names(table2), fill = c('blue', 'red'),  bty = 'n')

boxplot(info$Age~info$Married, col=c('blue', 'red'))
