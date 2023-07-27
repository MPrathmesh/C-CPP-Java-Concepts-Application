import java.lang.*;

class Marvellous extends Thread
{
    public void run()   //State Running
    {
        System.out.println("Inside thread: "+Thread.currentThread().getName()); //apn yeth concrete keli thread navachy class madhly run nvanchi method la 
    }
}

class Mythread2
{
    public static void main(String arg[])
    {
        Marvellous mobj1 = new Marvellous();
        Thread t1 = new Thread(mobj1,"First");  //State new

        Marvellous mobj2 = new Marvellous();
        Thread t2 = new Thread(mobj2,"Second");

        t1.start(); //state Runnable
        t2.start();

        //State Dead
    }
}

//concrte asn mhnj tila body asn.