package packs;

public class CommissionEmployee extends Employee
{
    double grossSale, commissionRate;
    public CommissionEmployee(String fn, String ln, long ss, double gross, double commission)
    {
        super(fn, ln, ss);
        this.grossSale = gross;
        this.commissionRate = commission;
    }
    public double earnings()
    {
        return(this.grossSale * this.commissionRate);
    }
    public double earnings(double bonus)
    {
        return(this.earnings() + bonus);
    }
}