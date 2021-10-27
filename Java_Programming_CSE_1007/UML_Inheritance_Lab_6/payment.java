import java.util.*;

interface Payment
{
    void make(int n);
    void display();
}

class Paypal implements Payment
{
    private String email;
    Paypal(String em)
    {
        this.email = em;
    }
    public void make(int n)
    {
        System.out.println("Payment made using Paypal.");
    }
    public void display()
    {
        System.out.println("Paypal email id :" + this.email);
    }
}

class Creditcard implements Payment
{
    private long cardnum;
    Creditcard(long card)
    {
        this.cardnum = card;
    }
    public void make(int n)
    {
        System.out.println("Payment made using Credit card.");
    }
    public void display()
    {
        System.out.println("Credit Card number :" + this.cardnum);
    }
}

class Customer
{
    private String name;
    double balance;
    Payment ob=null;
    Customer(String na, double bal)
    {
        this.name = na;
        this.balance = 0.0;
    }
    void setPayment(Payment obj)
    {
        this.ob = obj;
    }
    void purchase(int n)
    {
        this.ob.make(n);
        this.balance -= n;
    }
    void display()
    {
        System.out.println("Name of Customer : " + this.name);
        ob.display();
    }
}

class SilverCustomer extends Customer
{
    SilverCustomer(String na, double bal)
    {
        super(na, bal);
    }
    void display()
    {
        super.display();
        System.out.println("Category of Customer : Silver Customer");
    }
}

class GoldCustomer extends Customer
{
    GoldCustomer(String na, double bal)
    {
        super(na, bal);
    }
    void display()
    {
        super.display();
        System.out.println("Category of Customer : Gold Customer");
    }
}

class q2
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the mode of payment : \n1)Paypal\n2)Credit Card");
        int cho = sc.nextInt();
        System.out.println("Enter the name of the customer :");
        String name = sc.next();
        System.out.println("Enter the balance in the account :");
        double balance = sc.nextDouble();
        Payment ob = null;
        if(cho==1)
        {
            System.out.println("Enter the email address of the paypal account :");
            String email = sc.next();
            ob = new Paypal(email);
        }
        else if(cho==2)
        {
            System.out.println("Enter the credit card number :");
            long card = sc.nextLong();
            ob = new Creditcard(card);
        }
        if(cho==1 || cho==2)
        {
            System.out.println("Enter the payment amount : ");
            double pay = sc.nextDouble();
            System.out.println("Enter the type of Customer : \n1)Silver\n2)Gold");
            int cho1 = sc.nextInt();
            Customer cusob = null;
            if(cho1==1)
            {
                cusob = new SilverCustomer(name, balance);
            }
            else if(cho1==2)
            {
                cusob = new GoldCustomer(name, balance);
            }
            if(cho1==1 || cho1==2)
            {
                cusob.setPayment(ob);
                cusob.purchase((int)pay);
                cusob.display();
            }
        }
        sc.close();
    }
}