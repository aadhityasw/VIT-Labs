selection_score = c(44, 49, 52, 54, 47, 76, 65, 60, 63, 58, 50, 67)
proficency_score = c(48, 55, 45, 60, 43, 80, 58, 50, 77, 46, 47, 65)
cor.test(selection_score, proficency_score, method = 'spearman')


df3 = data.frame(selection_score, proficency_score)
df3
