class q1
{
    boolean isPrime(int a)
    {
        int i;
        for(i=2;i<(int)(a/2);i++)
        {
            if(a%i==0)
            {
                return(false);
            }
        }
        return(true);
    }

    int findSum(int a)
    {
        int b, s=0;
        while(a>0)
        {
            b = a%10;
            a = a/10;
            s = s+b;
        }
        return(s);
    }
    public static void main(String[] args)
    {
        int i,s, c=0;
        q1 ob = new q1();
        for(i=1000; i<2000;i++)
        {
            s = ob.findSum(i);
            if(ob.isPrime(s))
            {
                c++;
            }
        }
        System.out.println("The number of primes are : " + c);
    }
}