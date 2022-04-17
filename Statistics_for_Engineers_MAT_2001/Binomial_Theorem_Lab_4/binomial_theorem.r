dbinom(2, size=10, prob = 1/6)


probs = dbinom(x = c(0:10), size = 10, prob=1/6)
probs

probs = round(probs, 4)
probs

data.frame(x, probs)