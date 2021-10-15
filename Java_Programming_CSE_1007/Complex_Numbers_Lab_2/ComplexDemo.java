import java.io.*;
import java.lang.*;
class Complex
{
    double realPart, imgPart;
    Complex()
    {
        realPart = 0.0;
        imgPart = 0.0;
    }
    Complex(double real, double img)
    {
        realPart = real;
        imgPart = img;
    }
    public Complex add(Complex otherNumber)
    {
        Complex ob = new Complex();
        ob.realPart = this.realPart + otherNumber.realPart;
        ob.imgPart = this.imgPart + otherNumber.imgPart;
        return(ob);
    }
    public Complex subtract(Complex otherNumber)
    {
        Complex ob = new Complex();
        ob.realPart = this.realPart - otherNumber.realPart;
        ob.imgPart = this.imgPart - otherNumber.imgPart;
        return(ob);
    }
    public Complex multiply(Complex otherNumber)
    {
        Complex ob = new Complex();
        ob.realPart = (this.realPart * otherNumber.realPart) - (this.imgPart + otherNumber.imgPart);
        ob.imgPart = (this.realPart * otherNumber.imgPart) + (otherNumber.realPart * this.imgPart);
        return(ob);
    }
    public Complex divide(Complex otherNumber)
    {
        Complex ob = new Complex();
        double s = Math.pow(otherNumber.realPart,2) + Math.pow(otherNumber.imgPart, 2);
        ob.realPart = ((this.realPart * otherNumber.realPart) + (this.imgPart + otherNumber.imgPart))/s;
        ob.imgPart = ((otherNumber.realPart * this.imgPart) - (this.realPart * otherNumber.imgPart))/s;
        return(ob);
    }
    public void setRealPart(double realPart)
    {
        this.realPart = realPart;
    }
    public void setImaginaryPart(double ImaginaryPart)
    {
        this.imgPart = ImaginaryPart;
    }
    public double getRealPart()
    {
        return(this.realPart);
    }
    public double getImaginaryPart()
    {
        return(this.imgPart);
    }
    public String toString()
    {
        String s = "";
        if(this.realPart!=0)
        {
            s = Double.toString(this.realPart);
        }
        if(this.imgPart<0)
        {
            s = s + " - " + Double.toString(this.imgPart) + "i";
        }
        else if(this.imgPart>0)
        {
            s = s + " + " + Double.toString(this.imgPart) + "i";
        }
        return(s);
    }
}

class ComplexDemo
{
    public static void main(String args[])throws IOException
    {
        Complex n1 = new Complex();
        Complex n2 = new Complex();
        Complex res = new Complex();
        String s;
        
        InputStreamReader read = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(read);

        System.out.println("Enter the real and the imaginary part of the first number : ");
        n1.setRealPart(Double.parseDouble(in.readLine()));
        n1.setImaginaryPart(Double.parseDouble(in.readLine()));

        res.setRealPart(n1.getRealPart());
        res.setImaginaryPart(n1.getImaginaryPart());

        int cho = 0;
        do
        {
            System.out.println("----------------------------------------------------------------------------------------------------------");
            System.out.println("Options : ");
            System.out.println("1) Addition");
            System.out.println("2) Subtraction");
            System.out.println("3) Multiplication");
            System.out.println("4) Division");
            System.out.println("5) Exit");
            System.out.println("Enter your Choice : ");
            cho = Integer.parseInt(in.readLine());

            if(cho!=5)
            {
                System.out.println("Enter the real and the imaginary part of the second number : ");
                n2.setRealPart(Double.parseDouble(in.readLine()));
                n2.setImaginaryPart(Double.parseDouble(in.readLine()));
            }

            s = "";

            switch(cho)
            {
                case 1 :
                    res = res.add(n2);
                    s = res.toString();
                    break;
                case 2 :
                    res = res.subtract(n2);
                    s = res.toString();
                    break;
                case 3 :
                    res = res.multiply(n2);
                    s = res.toString();
                    break;
                case 4 :
                    res = res.divide(n2);
                    s = res.toString();
                    break;
                case 5 :
                    System.out.println("System Exiting...");
                    break;
                default :
                    System.out.println("Enter a valid option : ");
            }
            System.out.println(s);
        }while(cho!=5);
        System.out.println("----------------------------------------------------------------------------------------------------------");
    }
}