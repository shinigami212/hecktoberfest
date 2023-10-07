import java.io.*;
class prog
{
public static void main(String arg[])throws IOException
{
 int i, j, vowels, cons, p, l;
 String str,word, tmp;
 char ch, ch1;
 BufferedReader br=new BufferedReader(new 
InputStreamReader(System.in));
 System.out.println("Enter a paragraph : ");
 str=br.readLine();
 l = str.length();
 ch = str.charAt(l-1);
 System.out.println("\nOUTPUT:");
 if(ch != '.' && ch != '?')
 System.out.println("INVALID INPUT");
 else{
 p = vowels = cons = 0;
 tmp = str+" ";
 str = "";
 //Modify the string such that first letter of each word is capitalized
 for(i=0;i < tmp.length();i++){
 ch = tmp.charAt(i);
 if(ch == ' '){
 word = tmp.substring(p,i);
 ch1 = word.charAt(0);
 word = Character.toUpperCase(ch1)+word.substring(1);
 str+= word+" ";
 p = i + 1;
 }
}
 System.out.println("\n"+str);
 System.out.print("\nWord");
 for(j= 15 - 4; j>=1;j--)
 System.out.print(" ");
 System.out.println("\tVowels\tConsonants");
 p=0;
 for(i=0;i < l;i++){
 ch = str.charAt(i);
 if( ch != ' ' && ch != '.' && ch != '?'){
 if((ch>=65 && ch <= 90) || (ch>=97 && ch<=122)){
 //count vowels
 if("aeiouAEIOU".indexOf(ch) != -1)
 vowels++;
 else
 cons++;
 }
 }else{
 word = str.substring(p,i);
 System.out.print(word);
 for(j= 15 - word.length(); j>=1;j--)
 System.out.print(" ");
 System.out.println("\t "+vowels+"\t "+cons);
 p = i + 1;
 vowels = cons = 0;
 }//else
 }//loop i
 }//else
}//end of main
}//end of class
