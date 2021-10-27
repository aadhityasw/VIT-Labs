class ArrayOp<T>
{
    void printArray(T arr[])
    {
        System.out.println("The elements of the array are : ");
        for(int i=0;i<arr.length;i++)
        {
            System.out.println(arr[i]);
        }
    }
}

class q1
{
    public static void main(String[] args)
    {
        ArrayOp<Integer> ob1 = new ArrayOp<Integer>();
        ArrayOp<String> ob2 = new ArrayOp<String>();
        Integer arr[] = {1, 2, 3};
        String arr2[] = {"Hello", "World"};
        ob1.printArray(arr);
        ob2.printArray(arr2);
    }
}