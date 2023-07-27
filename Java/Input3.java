import java.lang.*;
import java.io.*;

class Input3
{
    public static void main(String arg[]) throws IOException
    {
        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);

        System.out.println("Enter String");
        String str = bobj.readLine();

        System.out.println("ENter integer");
        int no = Integer.parseInt(bobj.readLine());

        System.out.println("Enter float");
        float f = Float.parseFloat(bobj.readLine());

        System.out.println("Enter Double");
        double d = Double.parseDouble(bobj.readLine());

        System.out.println("Entered String is :"+str);
        System.out.println("Entered Integer is :"+no);
        System.out.println("Entered float is :"+f);
        System.out.println("Entered Double is :"+d);

    }
}