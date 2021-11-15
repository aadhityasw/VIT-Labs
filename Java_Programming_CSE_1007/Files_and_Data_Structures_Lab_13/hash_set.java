import java.util.*;

class Employee
{
    String name;
    int age;
    Employee(String na, int ag)
    {
        name = na;
        age = ag;
    }
    int getAge()
    {
        return(this.age);
    }
    String getName()
    {
        return(this.name);
    }
}

class q4
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        HashSet<Employee> arr = new HashSet<Employee>();
        int cho, age;
        String name;
        Iterator<Employee> itr;
        boolean flag;
        do
        {
            System.out.println("Make a choice : \n1)Enter a element. \n2)Remove an element. \n3)Search for an element. \n4)Exit \nEnter your choice : ");
            cho = sc.nextInt();
            if(cho == 1)
            {
                System.out.println("Enter the name and the age of the employee.");
                name = sc.next();
                age = sc.nextInt();
                arr.add(new Employee(name, age));
            }
            else if(cho == 2)
            {
                System.out.println("Enter the name of the employee to be terminated : ");
                name = sc.next();
                itr = arr.iterator();
                flag = false;
                while(itr.hasNext())
                {
                    if(name.equalsIgnoreCase(itr.next().getName()))
                    {
                        flag = true;
                        itr.remove();
                        System.out.println("The employee has been successfully terminated.");
                    }
                }
                if(flag == false)
                {
                    System.out.println("The employee with the entered name does not exist.");
                }
            }
            else if(cho == 3)
            {
                System.out.println("Enter the name of the employee to be searched : ");
                name = sc.next();
                itr = arr.iterator();
                flag = false;
                while(itr.hasNext())
                {
                    if(name.equalsIgnoreCase(itr.next().getName()))
                    {
                        flag = true;
                        System.out.println("The employee with the entered name " + name + " exists and their age is : " + itr.next().getAge() + " .");
                    }
                }
                if(flag == false)
                {
                    System.out.println("The employee with the entered name does not exist.");
                }
            }
            else if(cho == 4)
            {
                System.out.println("End of Program.");
            }
            else
            {
                System.out.println("Enter a valid choice.");
            }
            System.out.println("----------------------------------------------------------------------------");
        }while(cho!=4);
    }
}