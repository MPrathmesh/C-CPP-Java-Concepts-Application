import java.lang.*;
import java.util.*;

class Array3
{
    public static void main(String arg[]) 
    {
        int i = 0;
        int j = 0;
        int arr[][] = new int[2][3];

        arr[0][0] = 11;
        arr[0][1] = 21;
        arr[0][2] = 51;
        arr[1][0] = 101;
        arr[1][1] = 111;
        arr[1][2] = 121;
        //arr.lenght 2

        //    1         2         3
        for(i = 0; i<arr.length; i++) //outer
        {    //   1         2             3
            for(j = 0; j < arr[i].length;j++) //inner
            {
                System.out.println(arr[i][j]);  //4
            }
        }
    }
}