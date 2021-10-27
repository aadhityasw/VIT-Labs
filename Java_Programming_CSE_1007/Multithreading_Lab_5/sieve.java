import java.util.*;
class q2
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int num, i, j;
        System.out.println("Enter the number : ");
        num = sc.nextInt();
        boolean[] isPrime = new boolean[num+1];
        Arrays.fill(isPrime, Boolean.TRUE);
        isPrime[0] = false;
        isPrime[1] = false;
        for(i=2;i*i<num;i++)
        {
            if(isPrime[i] == true)
            {
                j = 2;
                while(i*j <= num)
                {
                    isPrime[i*j] = false;
                    j++;
                }
            }
        }
        System.out.println("The prime numbers are : ");
        for(i=0;i<=num;i++)
        {
            if(isPrime[i] == true)
            {
                System.out.println(i);
            }
        }
        sc.close();
    }
}