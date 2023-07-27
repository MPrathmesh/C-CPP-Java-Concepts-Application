import java.util.*;

class Input
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter your Name");
        String name = sobj.nextLine();

        System.out.println("Please enter your age");
        int Age = sobj.nextInt();

        System.out.println("Please enter your percentage");
        float Percentage = sobj.nextFloat();

        System.out.println("Your name is : "+name);
        System.out.println("Your age is : "+Age);
        System.out.println("Your percenatage : "+Percentage);

    }
}