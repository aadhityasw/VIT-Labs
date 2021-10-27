import java.io.*;
import java.util.*;
class test
{
    private void hi(){}
}

class q3
{
    public static void main(String[] args)
    {
        try
        {
            Scanner sc1 = new Scanner(System.in);


            System.out.println("Enter the file name to be read :");
            String w = sc1.next();
            w += ".txt";
            Scanner sc = new Scanner(new File(w));
            System.out.println("The file has been read.");
            sc.close();

            System.out.println("---------------------------------------------------");

            int a = 22/0;
            sc1.close();

            System.out.println("---------------------------------------------------");

            int arr[] = {1, 3, 4, 5};
            System.out.println(arr[44]);

            System.out.println("---------------------------------------------------");

            String s = "abc";
            System.out.println(s.charAt(44));

            System.out.println("---------------------------------------------------");

            String ss=null;
            System.out.println(ss);

            System.out.println("---------------------------------------------------");

            int arr1[] = new int[-100];

            System.out.println("---------------------------------------------------");

        }
        catch(FileNotFoundException e1)
        {
            System.out.println("The specfied file cannot be found.");
        }
        catch(ArithmeticException e2)
        {
            System.out.println("Cannot divide by zero.");
        }
        catch(ArrayIndexOutOfBoundsException e3)
        {
            System.out.println("The index of the array is larger than the length of the array.");
        }
        catch(StringIndexOutOfBoundsException e4)
        {
            System.out.println("The index of the String is larger than the length of the String.");
        }
        catch(NullPointerException e5)
        {
            System.out.println("NULL pointers cannot be used.");
        }
        catch(NegativeArraySizeException e6)
        {
            System.out.println("Array size cannot be negtive.");
        }

    }
}