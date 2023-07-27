import java.lang.*;
import java.util.*;

class ST1
{
    public static void main(String arg[])
    {
        Stack <Student>obj = new Stack<Student>();
        Student s1 = new Student(11,"Amit",89);
        Student s2 = new Student(21,"Pooja",93);
        Student s3 = new Student(51,"Rohit",80);
        Student s4 = new Student(101,"Sachin",97);

        obj.push(11);
        obj.push(22);
        obj.push(33);
        obj.push(44);

        Iterator iob = obj.iterator();
        while(iob.hasNext())
        {
            System.out.println(iob.next());
        }

        System.out.println("Poped elemenst are");
        int no = 0;
        no = obj.pop();
        System.out.println(no);

        no = obj.pop();
        System.out.println(no);
    }
}