empid = c(1, 2, 3)
empname = c("A", "B", "C")
empdesig = c("CSE", "ECE", "ECM")
empsal = c(1200, 12, 12000)
empage = c(12, 33, 123)
empgender = c("M", "M", "F")
df = data.frame(empid, empname, empdesig, empsal, empage, empgender)
df
df[1,4]
nrow(df)
ncol(mtcars)