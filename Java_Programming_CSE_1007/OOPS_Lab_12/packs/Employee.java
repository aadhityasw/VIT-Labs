package packs;

public abstract class Employee implements Payable
{
    String firstname,lastname;
    long ssn;
    public Employee(String fn, String ln, long ss)
    {
        this.firstname = fn;
        this.lastname = ln;
        this.ssn = ss;
    }
    public abstract double earnings();
}