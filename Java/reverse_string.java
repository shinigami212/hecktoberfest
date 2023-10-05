import java.util.*;
public class reverse_string{
    public static void main(String[] args){
       System.out.println("Enter the string:");
       Scanner read=new Scanner(System.in);
       String original= read.nextLine();
       read.close();
       String reverse="";
       int l=original.length();

       for(int i=l-1; i>=0; i--){
        reverse += original.charAt(i);
       }

       System.out.println("Reverse string is " + reverse + ". While, original string is " + original + ".");
    }
}