import packs.*;
import java.util.*;

class Payroll 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Payroll pay = new Payroll();

        System.out.println("Categories of Employees : ");
        System.out.println("1) Salaried Employee.");
        System.out.println("2) Commission Employee.");
        System.out.println("3) Base Plus Commission Employee.");
        System.out.println("4) Hourly Employee.");
        System.out.println("Enter your choice : ");
        int cho = sc.nextInt();

        double totalEarnings;

        System.out.println("Enter the First name of the employee : ");
        final String fname = sc.next();
        System.out.println("Enter the Last name of the employee : ");
        final String lname = sc.next();
        System.out.println("Enter the Social Security number of the employee : ");
        final long ssn = sc.nextLong();

        System.out.println("Enter yes or no to state if the employee has recieved bonus : ");
        String bcho = sc.next();
        Boolean bonus;
        double bonus_amt = 0;
        if(bcho.equalsIgnoreCase("yes") || bcho.equalsIgnoreCase("y"))
        {
            bonus = true;
            System.out.println("Enter the bonus amount recieved : ");
            bonus_amt = sc.nextDouble();
        }
        else
        {
            bonus = false;
        }

        if(cho==1)
        {
            System.out.println("Enter the Weekly Salary of the employee : ");
            double weekly = sc.nextDouble();
            SalariedEmployee ob = new SalariedEmployee(fname, lname, ssn, weekly);
            if(bonus)
            {
                totalEarnings = ob.earnings(bonus_amt);
            }
            else
            {
                totalEarnings = ob.earnings();
            }
            pay.printDetails(fname, lname, ssn, totalEarnings);
        }
        else if(cho==2)
        {
            System.out.println("Enter the Gross sales of the employee : ");
            double gsale = sc.nextDouble();
            System.out.println("Enter the Commission rate of the employee : ");
            double crate = sc.nextDouble();
            Payable ob = new CommissionEmployee(fname, lname, ssn, gsale, crate);
            if(bonus)
            {
                totalEarnings = ob.earnings(bonus_amt);
            }
            else
            {
                totalEarnings = ob.earnings();
            }
            pay.printDetails(fname, lname, ssn, totalEarnings);
        }
        else if(cho==3)
        {
            System.out.println("Enter the Gross sales of the employee : ");
            double gsale = sc.nextDouble();
            System.out.println("Enter the Basic Salary of the employee : ");
            double basic = sc.nextDouble();
            System.out.println("Enter the Commission rate of the employee : ");
            double crate = sc.nextDouble();
            Payable ob = new BasePlusCommissionEmployee(fname, lname, ssn, gsale, crate, basic);
            if(bonus)
            {
                totalEarnings = ob.earnings(bonus_amt);
            }
            else
            {
                totalEarnings = ob.earnings();
            }
            pay.printDetails(fname, lname, ssn, totalEarnings);
        }
        else if(cho==4)
        {
            System.out.println("Enter the Hourly Wage of the employee : ");
            double hwage = sc.nextDouble();
            System.out.println("Enter the total working hours of the employee : ");
            int hour = sc.nextInt();
            Payable ob = new HourlyEmployee(fname, lname, ssn, hwage, hour);
            if(bonus)
            {
                totalEarnings = ob.earnings(bonus_amt);
            }
            else
            {
                totalEarnings = ob.earnings();
            }
            pay.printDetails(fname, lname, ssn, totalEarnings);
        }
        else
        {
            System.out.println("Wrong Input");
        }
        sc.close();
    }

    void printDetails(String fname, String lname, long ssn, double totalEarnings)
    {
        System.out.println("--------------------------------------------------------------------------");
        System.out.println("Employee Name : " + fname + " " + lname);
        System.out.println("Social Security Number : " + ssn);
        System.out.println("Total Salary = " + totalEarnings);
        System.out.println("--------------------------------------------------------------------------");
    }
}