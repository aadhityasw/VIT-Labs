package packs;

public class HourlyEmployee extends Employee
{
    double wage;
    int hours;
    public HourlyEmployee(String fn, String ln, long ss, double wage, int h)
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
    public double earnings(double bonus)
    {
        return(this.earnings() + bonus);
    }
}