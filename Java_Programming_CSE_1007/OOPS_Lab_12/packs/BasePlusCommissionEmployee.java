package packs;

public class BasePlusCommissionEmployee extends CommissionEmployee
{
    double baseSalary;
    public BasePlusCommissionEmployee(String fn, String ln, long ss, double gross, double commission, double base)
    {
        super(fn, ln, ss, gross, commission);
        this.baseSalary = base;
    }
    public double earnings()
    {
        return((this.grossSale * this.commissionRate) + baseSalary);
    }
    public double earnings(double bonus)
    {
        return(this.earnings() + bonus);
    }
}