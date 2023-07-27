import java.lang.*;
import java.util.*;

class Demo extends Thread
{
    public void run()
    {
        System.out.println("Inside thrad : "+Thread.currentThread().getName());
        System.out.println("Thread priority is  : "+Thread.currentThread().getPriority());
    }
}

class Mythread7
{
    public static void main(String arg[]) throws Exception
    {
        System.out.println("Main Thread priority is : "+Thread.currentThread().getPriority());

        Marvellous mobj1 = new Marvellous();
        Thread t1 = new Thread(mobj1,"First");
        Marvellous mobj2 = new Marvellous();
        Thread t2 = new Thread(mobj2,"Second");

        t1.setPriority();
        t2.setPriority();

        t1.start();
        t2.start();

    }
}