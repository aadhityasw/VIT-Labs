import java.util.*;

class q2
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of words : ");
        int n = sc.nextInt();
        System.out.println("Enter the elements : ");

        ArrayList<String> arr = new ArrayList<String>();
        for(int i=0;i<n;i++)
        {
            arr.add(sc.next());
        }

        System.out.println("The elements of the array list are : ");
        for(int i=0;i<n;i++)
        {
            System.out.print(arr.get(i) + " ");
        }
        System.out.println();

        Collections.reverse(arr);
        System.out.println("The elements of the reversed array list are : ");
        for(int i=0;i<n;i++)
        {
            System.out.print(arr.get(i) + " ");
        }
        System.out.println();

        System.out.println("The elements of the array list that end with 's' are : ");
        for(int i=0;i<n;i++)
        {
            if(arr.get(i).endsWith("s"))
            {
                System.out.print(arr.get(i) + " ");
            }
        }
        System.out.println();

        System.out.println("The elements of the array list after removing words that end with 's' are : ");
        ArrayList<String> arr2 = new ArrayList<String>(arr);
        ListIterator<String> itr = arr2.listIterator();
        while(itr.hasNext())
        {
            String s = itr.next();
            if(s.startsWith("a") && s.endsWith("s"))
            {
                itr.remove();
            }
        }
        itr = arr2.listIterator();
        while(itr.hasNext())
        {
            System.out.print(itr.next() + " ");
        }
        System.out.println();

        System.out.println("The elements of the array after sorting are : ");
        Collections.sort(arr);
        itr = arr.listIterator();
        while(itr.hasNext())
        {
            System.out.print(itr.next() + " ");
        }
        System.out.println();
    }
}