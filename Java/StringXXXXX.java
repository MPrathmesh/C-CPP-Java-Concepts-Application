import java.lang.*;
import java.io.*;

class StringXXXXX
{
    public static void main(String arg[])
    {
       String str1 = "Hello";   //100
       String str2 = "Hello";   //1100
       String str3 = new String("Hello");   //200

       if(str1 == str3) if(100 == 300)
       {
        System.out.println("Strings are same");
       }
       else
       {
        System.out.println("String are not same");
       }

       if(str1.equals(str3))
       {
        System.out.println("Strings are same");
       }
       else
       {
        System.out.println("String are not same");
       }
    }
}