//17. to check whether the given string is palindrome or not
import java.io.*;
 

class stringPalindrome {
    // main function
    public static boolean stringPalindrome(String str)
    {
        // Initializing an empty string to store the reverse
        // of the original str
        String rev = "";
 
        // Initializing a new boolean variable for the
        // answer
        boolean ans = false;
 
        for (int i = str.length() - 1; i >= 0; i--) {
            rev = rev + str.charAt(i);
        }
 
        // Checking if both the strings are equal
        if (str.equals(rev)) {
            ans = true;
        }
        return ans;
    }
    public static void main(String[] args)
    {
        // Input string
        String str = "ababa";
 
        // Convert the string to lowercase
        str = str.toLowerCase();
        boolean A = stringPalindrome(str);
        System.out.println(A);
    }
}