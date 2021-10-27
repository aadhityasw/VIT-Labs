class Queues
{
    int n;
    boolean valueSet = false;
    synchronized int get() 
    {
        while(!valueSet)
        {
            try 
            {
                wait();
            }catch(InterruptedException e) 
            {
                System.out.println("InterruptedException caught");
            }
        }
        System.out.println("Got: " + n);
        this.valueSet = false;
        notify();
        return n;
    }
    synchronized void put(int n)
    {
        while(valueSet)
        {
            try 
            {
                wait();
            } catch(InterruptedException e) {
                System.out.println("InterruptedException caught");
            }
        }
        this.n = n;
        valueSet = true;
        System.out.println("Put: " + n);
        notify();
    }
}

class Producer implements Runnable 
{
    Queues q;
    Producer(Queues q) 
    {
        this.q = q;
        new Thread(this, "Producer").start();
    }
    public void run() 
    { 
        int i = 0;
        while(i<5) 
        {  
            q.put(i++);
        }
    }
}

class Consumer implements Runnable {
    Queues q;
    Consumer(Queues q) 
    {
        this.q = q;
        new Thread(this, "Consumer").start();
    }
    public void run()
    {
        int i = 0;
        while(i<5) 
        {
            q.get();
            i++;
        }
    } 
}

class q3
{
    public static void main(String args[])
    {
        Queues q = new Queues();
        new Producer(q);
        new Consumer(q);
    }
}