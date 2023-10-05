import java.util.*;
public class string_concat {
    public static void main(String[] args) {
       Scanner read=new Scanner(System.in);
       System.out.println("Enter the first string:");
       String s1= read.nextLine();
       System.out.println("Enter the second string:");
       String s2= read.nextLine();
       read.close();


       String s=s1.concat(s2);
       System.out.println("Concatenated string is: " + s);
    }
}