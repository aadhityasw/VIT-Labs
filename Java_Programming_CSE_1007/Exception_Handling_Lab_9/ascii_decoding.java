import java.util.*;

class q1
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the string :");
        String word = sc.next();
        int i=0,p=7;
        int num = 0,d=0;
        String s="";
        try
        {
            if(word.length()%8 !=0)
            {
                throw new Exception("Entered String should hava a length in terms of multiples of 8.");
            }
            while(i<word.length())
            {
                if(word.charAt(i)=='I')
                {
                    d = 1;
                }
                else if(word.charAt(i) == 'O')
                {
                    d=0;
                }
                num += Math.pow(2,p)*d;
                p--;
                if(p==-1)
                {
                    p=7;
                    if(num<32 || num>126)
                    {
                        throw new Exception("Number should be between 32 and 126");
                    }
                    s += (char)(num);
                    num=0;
                }
                i++;
            }
            if(s.charAt(0)==' ' || s.charAt(s.length()-1)==' ')
            {
                throw new Exception("The text should not start or end with a space.");
            }
            System.out.println(s);
        }
        catch(Exception e)
        {
            System.out.println(e.getMessage());
        }
        finally
        {
            sc.close();
        }
    }
}