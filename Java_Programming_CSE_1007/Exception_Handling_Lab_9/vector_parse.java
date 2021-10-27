import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

class q2
{
    public static void main(String[] args)
    {
        try
        {
            Scanner sc1 = new Scanner(System.in);
            System.out.println("Enter the file name to be read :");
            String w = sc1.next();
            w += ".txt";
            sc1.close();
            Scanner sc = new Scanner(new File(w));
            int arr[] = new int[10000];
            int i=0;
            while(sc.hasNextInt())
            {
                arr[i++] = sc.nextInt();
            }
            System.out.println("The numbers have been added into the vector.");
            for(int j=0;j<i;j++)
            {
                System.out.print(arr[j] + " ");
            }
            System.out.println();
            sc.close();
        }
        catch(FileNotFoundException e)
        {
            System.out.println("The specfied file cannot be found.");
        }
    }
}