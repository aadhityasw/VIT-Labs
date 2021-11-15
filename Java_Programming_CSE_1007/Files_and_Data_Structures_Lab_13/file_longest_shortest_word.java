import java.io.*;
import java.util.*;

class q1
{
    public static void main(String args[]) throws IOException
    {
        File file = new File("text.txt");
        Scanner sc = new Scanner(file);
        int llen = 0, slen = 99999999, len = 0;
        String arr[];
        String sho="", lon="";
        while(sc.hasNextLine())
        {
            arr = sc.nextLine().split(" ");
            for(int i=0;i<arr.length;i++)
            {
                len = arr[i].length();
                if(len >= llen)
                {
                    llen = len;
                    lon = arr[i];
                }
                if(slen >= len && len!=0)
                {
                    slen = len;
                    sho = arr[i];
                }
            }
        }
        System.out.println("The last longest word is : " + lon + " and its length is : " + llen);
        System.out.println("The last shortest word is : " + sho + " and its length is : " + slen);
    }
}