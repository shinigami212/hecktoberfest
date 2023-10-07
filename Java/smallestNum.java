//8. Smallest Among Three: Find and display the smallest among three numbers
public class smallestNum {
  
        public static void smallEle(int a,int b,int c)
        {
            System.out.println("Numbers are:-" +a+" "+b+" "+c);
            if(a<b && a<c)
            {
                System.out.println(a+" is smaller");
            }
            else if(b<a && b<c)
            {
                System.out.println(b+" is smaller");
            }
            else
            {
                System.out.println(c+" is smaller");
            }
    
    
        }
        public static void main(String args[])
        {
          
            smallEle(20,80,733);
    
        }
        
    }
    
    

