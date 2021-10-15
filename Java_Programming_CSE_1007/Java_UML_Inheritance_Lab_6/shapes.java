import java.util.*;

class Shape
{
    private String color;
    private boolean filled;

    public Shape()
    {
        this.color="red";
        this.filled =true;
    }
    public Shape(String col, boolean fil)
    {
        this.color = col;
        this.filled  = fil;
    }
    public String getColor()
    {
        return(color);
    }
    public void setColor(String col)
    {
        this.color = col;
    }
    public boolean isFilled()
    {
        return(this.filled);
    }
    public String toString()
    {
        String s = "Color : " + this.color + "\nIs Filled : " + this.filled + "\n";
        return(s);
    }
    public void setFilled(boolean fil)
    {
        this.filled = fil;
    }
}

class Circle extends Shape
{
    private double radius;
    public Circle()
    {
        super();
        this.radius = 1.0;
    }
    public Circle(double rad)
    {
        super();
        this.radius = rad;
    }
    public Circle(double rad, String col, boolean fil)
    {
        super(col, fil);
        this.radius = rad;
    }
    public double getRadius()
    {
        return(this.radius);
    }
    public void setRadius(double rad)
    {
        this.radius = rad;
    }
    public double getArea()
    {
        double area = Math.pow(this.radius,2) * 3.14;
        return(area);
    }
    public double getPerimeter()
    {
        double perimeter = 2 * 3.14 * this.radius;
        return(perimeter);
    }
    public String toString()
    {
        String s = "Shape : Circle\n";
        s += super.toString();
        s += "Radius : " + this.radius + "\n";
        s += "Area : " + this.getArea() + "\n";
        s += "Perimeter : " + this.getPerimeter() + "\n";
        return(s);
    }
}

class Rectangle extends Shape
{
    private double length, width;
    public Rectangle()
    {
        super();
        this.length = 1.0;
        this.width = 1.0;
    }
    public Rectangle(double len, double wid)
    {
        super();
        this.length = len;
        this.width = wid;
    }
    public Rectangle(double len, double wid, String col, boolean fil)
    {
        super(col, fil);
        this.length = len;
        this.width = wid;
    }
    public double getLength()
    {
        return(this.length);
    }
    public double getWidth()
    {
        return(this.width);
    }
    public void setLength(double len)
    {
        this.length = len;
    }
    public void setWidth(double wid)
    {
        this.width = wid;
    }
    public double getArea()
    {
        double area = this.length * this.width;
        return(area);
    }
    public double getPerimeter()
    {
        double perimeter = 2 * (this.width + this.width);
        return(perimeter);
    }
    public String toString()
    {
        String s = "Shape : Rectangle\n";
        s += super.toString();
        s += "Length : " + this.length + "\n";
        s += "width : " + this.width + "\n";
        s += "Area : " + this.getArea() + "\n";
        s += "Perimeter : " + this.getPerimeter() + "\n";
        return(s);
    }
}

class Square extends Rectangle
{
    public Square()
    {
        super();
    }
    public Square(double side)
    {
        super(side, side);
    }
    public Square(double side, String col, boolean fil)
    {
        super(side, side, col, fil);
    }
    public double getSide()
    {
        return(super.getLength());
    }
    public void setSide(double side)
    {
        super.setLength(side);
        super.setWidth(side);
    }
    public void setLength(double side)
    {
        super.setLength(side);
    }
    public void setWidth(double side)
    {
        super.setWidth(side);
    }
    public String toString()
    {
        String s = "Shape : Square\n";
        s += "Color : " + super.getColor() + "\n";
        s += "Is Filled : " + super.isFilled() + "\n";
        s += "Side : " + this.getSide() + "\n";
        s += "Area : " + super.getArea() + "\n";
        s += "Perimeter : " + super.getPerimeter() + "\n";
        return(s);
    }
}

public class q1
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the shape of the object :\n1)Circle\n2)Rectangle\n3)Square\n Enter your choice :");
        int cho = sc.nextInt();
        System.out.println("Enter the color of the object :");
        String col = sc.next();
        System.out.println("Enter if the object is to be filled or not(1 -> Yes and 2 -> No) :");
        int cho1 = sc.nextInt();
        boolean fil = false;
        if(cho1==1)
        {
            fil = true;
        }
        Shape ob=null;
        if(cho==1)
        {
            System.out.println("Enter the radius of the circle : ");
            double r = sc.nextDouble();
            ob = new Circle(r, col, fil);
            System.out.println("The details of the object are : ");
            System.out.println(ob.toString());
        }
        else if(cho==2)
        {
            System.out.println("Enter the Length of the Rectangle : ");
            double l = sc.nextDouble();
            System.out.println("Enter the Breadth of the Rectangle : ");
            double b = sc.nextDouble();
            ob = new Rectangle(l, b, col, fil);
            System.out.println("The details of the object are : ");
            System.out.println(ob.toString());
        }
        else if(cho==3)
        {
            System.out.println("Enter the Side of the Square : ");
            double s = sc.nextDouble();
            ob = new Square(s, col, fil);
            System.out.println("The details of the object are : ");
            System.out.println(ob.toString());
        }
        sc.close();
    }
}