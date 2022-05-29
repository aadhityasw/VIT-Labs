Item1 = c(22,42,44,52,45,37)
Item2 = c(52,33,8,47,43,32)
Item3 = c(16,24,19,18,34,39)

group = data.frame(cbind(Item1,Item2,Item3))
summary(group)
stgr = stack(group);
crd = aov(values~ind,data=stgr)
summary(crd)
