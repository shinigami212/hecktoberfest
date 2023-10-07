import java.io.*;

class ISBNvalidation

{

 public static void main()throws IOException

 {

 BufferedReader br=new BufferedReader(new InputStreamReader(System.in));

 System.out.print("Enter a 10 digit code : ");

 String s=br.readLine();

 int l=s.length();

 if(l!=10)

 System.out.println("Output : Invalid Input");

 else

 {

 String ch;

 int a=0, sum=0, k=10;

 for(int i=0; i<l; i++)

 {

 ch=Character.toString(s.charAt(i));

 if(ch.equalsIgnoreCase("X"))

 a=10;

 else

 a=Integer.parseInt(ch);

 sum=sum+a*k;

 k--;

 }

 System.out.println("Output : Sum = "+sum);

 if(sum%11==0)

 System.out.println("Leaves No Remainder - Valid ISBN Code");

 else

 System.out.println("Leaves Remainder - Invalid ISBN Code");

 }

 }

