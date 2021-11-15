import java.util.*;

class q3
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> arr = new ArrayList<Integer>();

        //  Insertion
        System.out.println("Enter the number of elements to be entered : ");
        int n = sc.nextInt();
        int i, num;
        System.out.println("Enter the elements : ");
        for(i=0;i<n;i++)
        {
            arr.add(sc.nextInt());
        }

        System.out.println("----------------------------------------------------------------------------");

        //  Retrieve element
        System.out.println("Enter the index position of the required element : ");
        int pos = sc.nextInt() - 1;
        if(pos < arr.size())
        {
            System.out.println("The required element is : " + arr.get(pos));
        }
        else
        {
            System.out.println("The entered index position is invalid.");
        }

        System.out.println("----------------------------------------------------------------------------");

        //  Update element
        System.out.println("Enter the index position of the element to be changed : ");
        pos = sc.nextInt() - 1;
        if(pos < arr.size())
        {
            System.out.println("Enter the element to be updated to : ");
            num = sc.nextInt();
            arr.set(pos, num);
            System.out.println("The required element has been updated.");
        }
        else
        {
            System.out.println("The entered index position is invalid.");
        }

        System.out.println("----------------------------------------------------------------------------");

        //  Remove element
        System.out.println("Enter the index position of the element to be removed : ");
        pos = sc.nextInt() - 1;
        if(pos < arr.size())
        {
            num = arr.get(pos);
            arr.remove(pos);
            System.out.println("The element in that location is : " + num + " and it has been removed");
        }
        else
        {
            System.out.println("The entered index position is invalid.");
        }

        System.out.println("----------------------------------------------------------------------------");

        // Search element
        System.out.println("Enter the element to be searched : ");
        num = sc.nextInt();
        if(arr.contains(num))
        {
            System.out.println("The entered element " + num + " is present in the array-list.");
        }
        else
        {
            System.out.println("The entered element " + num + " is not present in the array-list.");
        }

        System.out.println("----------------------------------------------------------------------------");

        // Sort elements
        Collections.sort(arr);
        System.out.println("The elements of the array-list in sorted order is : ");
        for(i=0;i<arr.size();i++)
        {
            System.out.println(arr.get(i));
        }

        System.out.println("----------------------------------------------------------------------------");

    }
}