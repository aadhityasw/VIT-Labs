import java.util.*;

class q3
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        HashMap<String, ArrayList<String>> studentmap = new HashMap<String, ArrayList<String>>();
        HashMap<String, ArrayList<String>> subjectmap = new HashMap<String, ArrayList<String>>();

        System.out.println("Enter the Number of Students : ");
        int nstud = sc.nextInt();
        ArrayList<String> current;
        for(int i=0;i<nstud;i++)
        {
            System.out.println("Enter the name of the student " + i + " : ");
            String name = sc.next();
            System.out.println("Enter the number of courses enrolled by " + name + " :");
            int nsub = sc.nextInt();
            System.out.println("Enter the subjects : ");
            current = new ArrayList<String>();
            for(int j=0;j<nsub;j++)
            {
                current.add(sc.next());
            }
            studentmap.put(name, current);
        }

        System.out.println("Enter the number of Subjects : ");
        int nsub = sc.nextInt();
        for(int i=0;i<nsub;i++)
        {
            System.out.println("Enter the name of the subject " + i + " : ");
            String name = sc.next();
            System.out.println("Enter the number of teachers alotted to " + name + " :");
            int ntea = sc.nextInt();
            System.out.println("Enter the names of the teachers : ");
            current = new ArrayList<String>();
            for(int j=0;j<ntea;j++)
            {
                current.add(sc.next());
            }
            subjectmap.put(name, current);
        }

        int cho;
        do
        {
            System.out.println("Make a choice : ");
            System.out.println("1) Add a Student.\n2) Remove a Student.\n3)Display the student details.\n4) Display the Courses details.\n5)Display the teachers of a student.\n6)Exit.");  
            System.out.println("Enter your choice : ");
            cho = sc.nextInt();
            if(cho==1)
            {
                System.out.println("Enter the name of the student : ");
                String name = sc.next();
                System.out.println("Enter the number of courses enrolled by " + name + " :");
                int nsub1 = sc.nextInt();
                System.out.println("Enter the subjects : ");
                current = new ArrayList<String>();
                for(int j=0;j<nsub1;j++)
                {
                    current.add(sc.next());
                }
                studentmap.put(name, current);
            }
            else if(cho==2)
            {
                System.out.println("Enter the name of the subject : ");
                String name = sc.next();
                System.out.println("Enter the number of teachers alotted to " + name + " :");
                int ntea = sc.nextInt();
                System.out.println("Enter the names of the teachers : ");
                current = new ArrayList<String>();
                for(int j=0;j<ntea;j++)
                {
                    current.add(sc.next());
                }
                subjectmap.put(name, current);
            }
            else if(cho==3)
            {
                System.out.println(studentmap);
            }
            else if(cho==4)
            {
                System.out.println(subjectmap);
            }
            else if(cho == 5)
            {
                System.out.println("Enter the name of the student : ");
                String name = sc.next();
                System.out.println("The teachers who teach the student are : ");
                for (String string : studentmap.get(name)) 
                {
                    for (String string2 : subjectmap.get(string)) 
                    {
                        System.out.println(string2);
                    }
                }
            }
            else if(cho == 6)
            {
                System.out.println("End of Program.");
            }
            else
            {
                System.out.println("Invalid Choice.");
            }
            System.out.println("---------------------------------------------------------------------------");
        }while(cho!=6);
        sc.close();
    }
}