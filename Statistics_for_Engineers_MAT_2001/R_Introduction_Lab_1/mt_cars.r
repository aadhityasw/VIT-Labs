dff = mtcars
dff

dff$vs = factor(dff$vs, labels = c("Low", "High"))
dff

good = subset(dff, dff$vs=="High")
good

high = subset(dff, dff$mpg>19.0)
high

lesshigh = subset(dff, (dff$mpg>19.0 & dff$mpg<22.0))
lesshigh

summary(dff)