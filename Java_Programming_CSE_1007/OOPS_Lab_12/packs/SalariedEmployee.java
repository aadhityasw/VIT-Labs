package packs;

public class SalariedEmployee extends Employee
{
    double weeklysal;
    public SalariedEmployee(String fn, String ln, long ss, double weekly)
    {
        super(fn, ln, ss);
        this.weeklysal = weekly;
    }
    public double earnings()
    {
        return(this.weeklysal);
    }
    public double earnings(double bonus)
    {
        return(this.earnings() + bonus);
    }
}