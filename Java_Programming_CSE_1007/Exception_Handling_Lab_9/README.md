# Java - Exception Handling (Lab 9)

## 1. ASCII Decoding

Our computers started storing the ones as capital letter Is and  zeroes as capital letter Os! For example, the character A, which is 65 in ASCII, would normally be stored as the byte 01000001, but our computers are storing it as OIOOOOOI.

Given a string of 8-character "bytes" consisting of Is and Os, translate it using ASCII. Every "byte" is guaranteed to translate to a printable character (a decimal value between 32 and 126, inclusive). Note that one of these characters (the one with decimal value 32) is a space. No translated message will begin or end with a space, but there may be internal space characters.

Use Try/catch block where ever required.

#### Sample Input
`OIOOIIIIOIOOIO`

#### Sample Output
`OK`



## 2. Vector File Parsing

Write a method readList which should read in ‘int’ values from a file, print each value, and append them to the end of the vector. You should catch all appropriate errors.



## 3. Exception Handling - Exploration

Write a program that demonstrates how various exceptions are caught with catch ( `Exception exception` ).
