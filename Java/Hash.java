import java.lang.*;

class Demo
{}

class Hash
{
  public static void main(String arg[]) throws Exception
  {
    String str1 = "Marvellous";
    String str2 = "Marvellous";
    String str3 = "Infosystems";
    Demo dobj = new Demo();

    System.out.println("HashCode of str1 : "+str1.hashCode());
    System.out.println("HashCode of str2 : "+str2.hashCode());
    System.out.println("HashCode of str3 : "+str3.hashCode());
    System.out.println("HashCode of dobj : "+dobj.hashCode());
  }
}