//5.  Even or Odd: Check if a number is even or odd.


public class evenoddCheck
{
    public static void evenoddFun(int number)
    {
        if(number%2==0)
        {
            System.out.println(number+" is even...");
        }
        else
        {
            System.out.println(number+"is odd...");
        }
    }
    public static void main(String args[])
     {

        evenoddFun(20);

     }

}