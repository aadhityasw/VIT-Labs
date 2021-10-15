import java.util.*;
abstract class employee
{
    double basic, da, hra;
    employee(double b)
    {
        basic = b;
        da = b;
        hra = 0.0;
    }
    abstract double salary();
    
}
class Manager extends employee
{
    double ca, ta;
    Manager(double b)
    {
        super(b);
        hra = 0.5*basic;
        ca=2500;
        ta = 0.15*basic;
    }
    double salary()
    {
        return(basic+da+hra+ca+ta);
    }
}
class Engineers extends employee
{
    double ta;
    Engineers(double b)
    {
        super(b);
        hra = 0.3*basic;
        ta = 0.15*basic;
    }
    double salary()
    {
        return(basic+da+hra+ta);
    }
}
class Auditors extends employee
{
    double lta, ca, ma;
    Auditors(double b)
    {
        super(b);
        hra = 0.3*basic;
        lta = 0.1*basic;
        ma=3000;
        ca=2500;
    }
    double salary()
    {
        return(basic+da+hra+lta+ma+ca);
    }
}
class Supervisors extends employee
{
    Supervisors(double b)
    {
        super(b);
        hra = 0.3*basic;
    }
    double salary()
    {
        return(basic+da+hra);
    }
}
class q1
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the type of employee : ");
        System.out.println("1) Manager\n2)Engineers\n3)Auditors\n4)Supervisors");
        int cho;
        cho = sc.nextInt();
        System.out.println("Enter the basic salary : ");
        double ba = sc.nextDouble();
        double sal;
        if(cho==1)
        {
            Manager ob = new Manager(ba);
            sal = ob.salary();
            System.out.println("Salary = " + sal);
        }
        else if(cho==2)
        {
            Engineers ob = new Engineers(ba);
            sal = ob.salary();
            System.out.println("Salary = " + sal);
        }
        else if(cho==3)
        {
            Auditors ob = new Auditors(ba);
            sal = ob.salary();
            System.out.println("Salary = " + sal);
        }
        else if(cho==4)
        {
            Supervisors ob = new Supervisors(ba);
            sal = ob.salary();
            System.out.println("Salary = " + sal);
        }
        else
        {
            System.out.println("Wrong choice");
        }
        sc.close();
    }
}