pairs(mtcars, main = "mtcars data", gap = 1/4)
coplot(mpg ~ disp | as.factor(cyl), data = mtcars, panel = panel.smooth, rows = 1)
mtcars2 <- within(mtcars, {
   vs <- factor(vs, labels = c("V", "S"))
   am <- factor(am, labels = c("automatic", "manual"))
   cyl  <- ordered(cyl)
   gear <- ordered(gear)
   carb <- ordered(carb)
})
summary(mtcars2)

data<-read.table(file.choose(),header=TRUE)
time=c(t(as.matrix(data)))
f=c("Oper1","Oper2","Oper3","Oper4","Oper5","Oper6")
g=c("M1","M2","M3","M4")
k=ncol(data)
n=nrow(data)

Operators=gl(k,1,n*k,factor(f))
Machines=gl(n,k,n*k,factor(g))
anova=aov(time ~ Machines + Operators)
summary(anova)

interaction.plot(Operators,Machines,time)
par(mfrow=c(1,2))

plot(time~Machines+Operators,main="Product time")

