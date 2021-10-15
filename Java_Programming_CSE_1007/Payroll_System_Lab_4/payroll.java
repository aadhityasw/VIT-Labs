import java.util.*;
interface  Payable
{
    double earnings();
}
abstract class Employee implements Payable
{
    String firstname,lastname;
    long ssn;
    Employee(String fn, String ln, long ss)
    {
        this.firstname = fn;
        this.lastname = ln;
        this.ssn = ss;
    }
    public abstract double earnings();
}

class SalariedEmployee extends Employee
{
    double weeklysal;
    SalariedEmployee(String fn, String ln, long ss, double weekly)
    {
        super(fn, ln, ss);
        this.weeklysal = weekly;
    }
    public double earnings()
    {
        return(this.weeklysal);
    }
}

class HourlyEmployee extends Employee
{
    double wage;
    int hours;
    HourlyEmployee(String fn, String ln, long ss, double wage, int h)
    {
        super(fn, ln, ss);
        this.wage = wage;
        this.hours = h;
    }
    public double earnings()
    {
        double totsal;
        if(hours<=40)
        {
            totsal = wage * hours;
        }
        else
        {
            totsal = (wage * 40) + (wage * 1.5 * (hours - 40));
        }
        return(totsal);
    }
}

class CommissionEmployee extends Employee
{
    double grossSale, commissionRate;
    CommissionEmployee(String fn, String ln, long ss, double gross, double commission)
    {
        super(fn, ln, ss);
        this.grossSale = gross;
        this.commissionRate = commission;
    }
    public double earnings()
    {
        return(this.grossSale * this.commissionRate);
    }
}

class BasePlusCommissionEmployee extends CommissionEmployee
{
    double baseSalary;
    BasePlusCommissionEmployee(String fn, String ln, long ss, double gross, double commission, double base)
    {
        super(fn, ln, ss, gross, commission);
        this.baseSalary = base;
    }
    public double earnings()
    {
        return((this.grossSale * this.commissionRate) + baseSalary);
    }
}

class q 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Categories of Employees : ");
        System.out.println("1) Salaried Employee.");
        System.out.println("2) Commission Employee.");
        System.out.println("3) Base Plus Commission Employee.");
        System.out.println("4) Hourly Employee.");
        System.out.println("Enter your choice : ");
        int cho = sc.nextInt();

        String fname, lname;
        long ssn;
        double totalEarnings;

        System.out.println("Enter the First name of the employee : ");
        fname = sc.next();
        System.out.println("Enter the Last name of the employee : ");
        lname = sc.next();
        System.out.println("Enter the Social Security number of the employee : ");
        ssn = sc.nextLong();

        if(cho==1)
        {
            System.out.println("Enter the Weekly Salary of the employee : ");
            double weekly = sc.nextDouble();
            SalariedEmployee ob = new SalariedEmployee(fname, lname, ssn, weekly);
            totalEarnings = ob.earnings();
            System.out.println("Total Salary = " + totalEarnings);
        }
        else if(cho==2)
        {
            System.out.println("Enter the Gross sales of the employee : ");
            double gsale = sc.nextDouble();
            System.out.println("Enter the Commission rate of the employee : ");
            double crate = sc.nextDouble();
            CommissionEmployee ob = new CommissionEmployee(fname, lname, ssn, gsale, crate);
            totalEarnings = ob.earnings();
            System.out.println("Total Salary = " + totalEarnings);
        }
        else if(cho==3)
        {
            System.out.println("Enter the Gross sales of the employee : ");
            double gsale = sc.nextDouble();
            System.out.println("Enter the Basic Salary of the employee : ");
            double basic = sc.nextDouble();
            System.out.println("Enter the Commission rate of the employee : ");
            double crate = sc.nextDouble();
            BasePlusCommissionEmployee ob = new BasePlusCommissionEmployee(fname, lname, ssn, gsale, crate, basic);
            totalEarnings = ob.earnings();
            System.out.println("Total Salary = " + totalEarnings);
        }
        else if(cho==4)
        {
            System.out.println("Enter the Hourly Wage of the employee : ");
            double hwage = sc.nextDouble();
            System.out.println("Enter the total working hours of the employee : ");
            int hour = sc.nextInt();
            HourlyEmployee ob = new HourlyEmployee(fname, lname, ssn, hwage, hour);
            totalEarnings = ob.earnings();
            System.out.println("Total Salary = " + totalEarnings);
        }
        else
        {
            System.out.println("Wrong Input");
        }
        sc.close();
    }
}