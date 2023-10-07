

public class largestNum {
    /**
     * @param a
     */
    public static void largeEle(int a,int b,int c)
    {
        System.out.println("Numbers are:-" +a+" "+b+" "+c);
        if(a>b && a>c)
        {
            System.out.println(a+" is greater");
        }
        else if(b>a && b>c)
        {
            System.out.println(b+" is greater");
        }
        else
        {
            System.out.println(c+" is greater");
        }


    }
    public static void main(String args[])
    {
      
        largeEle(20,80,733);

    }
    
}


