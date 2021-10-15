# Complex Number Arithmetic (Lab 2)

Write a Java class Complex for dealing with complex number. Your class must have the following features:

## Instance variables :

* `realPart` - for the real part of type double
* `imaginaryPart` - for imaginary part of type double.


## Constructor:

* `public Complex ()`: A default constructor, it should initialize the number to 0, 0)
* `public Complex (double realPart, double imaginaryPart)`: A constructor with parameters, it creates the complex object by setting the two fields to the passed values.


## Instance methods:

* `public Complex add (Complex otherNumber)`: This method will find the sum of the current complex number and the passed complex number.  The methods returns a new Complex number which is the sum of the two.
* `public Complex subtract (Complex otherNumber)`: This method will find the difference of the current complex number and the passed complex number.  The methods returns a new Complex number which is the difference of the two.
* `public Complex multiply (Complex otherNumber)`: This method will find the product of the current complex number and the passed complex number.  The methods returns a new Complex number which is the product of the two.
* `public Complex divide (Complex otherNumber)`: This method will find the ... of the current complex number and the passed complex number.  The methods returns a new Complex number which is the ... of the two.
* `public void setRealPart (double realPart)`: Used to set the real part of this complex number.
* `public void setImaginaryPart (double realPart)`: Used to set the imaginary part of this complex number.
* `public double getRealPart()`: This method returns the real part of the complex number
* `public double getImaginaryPart()`: This method returns the imaginary part of the complex number
* `public String toString()`: This method allows the complex number to be easily printed out to the screen


Write a separate class ComplexDemo with a main() method and test the Complex class methods.
