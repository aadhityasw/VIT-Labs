import java.util.*;

class q1
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the group length :");
        int k = sc.nextInt();

        System.out.println("Enter the number of elements :");
        int n = sc.nextInt();
        System.out.println("Enter the elements :");
        LinkedList<Integer> list = new LinkedList<Integer>();
        for(int i=0;i<n;i++)
        {
            list.addLast(sc.nextInt());
        }
        int itr=0,itr1=0,itr2=0;
        int p=0;
        System.out.println("Result :");
        while(itr<list.size())
        {
            if((itr+k)<=list.size())
                itr += k;
            else
                itr = list.size();
            itr2 = itr1;
            while(itr2<itr)
            {
                list.add(itr-p, list.get(itr1));
                list.remove(itr1);
                p++;
                itr2++;
            }
            itr1 += k;
            p=0;
        }
        for(itr=0;itr<list.size();itr++)
        {
            System.out.print(list.get(itr) + " ");
        }
        sc.close();
    }
}