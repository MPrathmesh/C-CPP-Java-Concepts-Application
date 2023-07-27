import java.lang.*;

class Arithmatic
{
	public int Addition(int No1, int No2)
	{
		int Ans = 0;
		Ans = No1 + No2;
		return Ans;
	}
}

class Specific
{
	public static void main(String arg[])
	{	
		Arithmatic obj = new Arithmatic();
		int ret = 0;
		ret = obj.Addition(10,11);
		System.out.println("Addition is : "+ret);
	}
}