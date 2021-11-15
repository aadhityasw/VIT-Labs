import java.io.*;
import java.util.*;

class q2
{
    public static void main(String[] args)
    {
        System.out.println("Working Directory = " + System.getProperty("user.dir"));
        String maindirpath = System.getProperty("user.dir") + "/names";
        try {
            File file = new File(maindirpath);
            if(file.canRead())
            {
                System.out.println("The directory has read permission.");
            }
            else
            {
                System.out.println("The directory does not have read permission.");
            }
            if(file.canWrite())
            {
                System.out.println("The directory has write permission.");
            }
            else
            {
                System.out.println("The directory does not have write permission.");
            }
            if(file.canRead() || file.canWrite())
            {
                File arr[] = file.listFiles();
                String pdfs[] = new String[arr.length];
                String docs[] = new String[arr.length];
                int p=0, d=0, i;
                for(i=0;i<arr.length;i++)
                {
                    if(arr[i].getName().endsWith(".pdf"))
                    {
                        pdfs[p++] = arr[i].getName();
                    }
                    else if(arr[i].getName().endsWith(".doc"))
                    {
                        docs[d++] = arr[i].getName();
                    }
                }
                System.out.println("The files ending with '.pdf' are : ");
                for(i=0;i<p;i++)
                {
                    System.out.println(pdfs[i]);
                }
                System.out.println("The files ending with '.doc' are : ");
                for(i=0;i<d;i++)
                {
                    System.out.println(docs[i]);
                }
            }
        } catch (Exception e) {
            System.out.println("Error");
        }
    }
}