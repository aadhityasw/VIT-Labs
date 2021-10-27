import java.util.*;
import java.io.*;

class Restaurant
{
    int sno, size;
    double totbill, tips;
    String time, day, smoker;
    Restaurant(String s, String tot, String tip, String smo, String day, String time, String size)
    {
        sno = Integer.parseInt(s);
        if(tot.equalsIgnoreCase("NaN"))
        {
            totbill = 0.0;
        }
        else
        {
            totbill = Double.parseDouble(tot);
        }
        if(tip.equalsIgnoreCase("NaN"))
        {
            tips = 0.0;
        }
        else
        {
            tips = Double.parseDouble(tip);
        }
        smoker = smo;
        this.day = day;
        this.time = time;
        if(size.equalsIgnoreCase("NaN"))
        {
            this.size = 0;
        }
        else
        {
            this.size = Integer.parseInt(size);
        }
    }
}


class q
{
    public static void main(String[] args)
    {
        try {
            File file = new File("Tips.csv");
            Scanner sc = new Scanner(file);
            sc.nextLine();
            String row[];
            ArrayList<Restaurant> elements = new ArrayList<Restaurant>();
            Restaurant ob;
            double maxbill = 0.0, tottips = 0.0;
            String maxbillday = "";
            for(int i=0;i<100;i++)
            {
                row = sc.nextLine().split(",");
                ob = new Restaurant(row[0], row[1], row[2], row[3], row[4], row[5], row[6]);
                elements.add(ob);
                if(ob.totbill > maxbill)
                {
                    maxbill = ob.totbill;
                    maxbillday = ob.day;
                }
                if(ob.day.equalsIgnoreCase("sun"))
                {
                    tottips += ob.tips;
                }
            }
            System.out.println("The day of Maximum bill is : " + maxbillday + " and it amounts to : " + maxbill);
            System.out.println("The total tips collected on sunday : " + tottips);

            sc.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}