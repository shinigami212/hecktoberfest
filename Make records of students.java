import java.io.*;
import java.util.*;
class TextFile
{
static void createTextFile(int n)
{
try //to handle exceptions
{
//to open TEXT file in output mode
FileWriter fw = new FileWriter("Stud.txt");
BufferedWriter bw = new BufferedWriter(fw);
PrintWriter pw=new PrintWriter(bw);
Scanner sc=new Scanner(System.in);
String name; //variable declaration
int rno; //variable declaration for roll number
double mks; //variable declaration for marks
//accepting data and writing in file
for(int i=1; i<=n; i++)
{ //input information from the user
System.out.println("Enter name "); name=sc.next();
System.out.println("Enter Roll No."); rno=sc.nextInt();
System.out.println("Enter Marks "); mks=sc.nextDouble();
//write information in the text file
pw.println(rno); //writing roll number in file
pw.println(name); //writing name in file
pw.println(mks); //writing marks in file
}
pw.close(); //closing the file otherwise data will not be saved
}
catch(Exception E) { } //handling of exception i.e. runtime errors
}
static void appendTextFile(int n)throws Exception
{ //to open TEXT file in Append mode 
//so that more records can be added in an existing file
FileWriter fw = new FileWriter("Stud.txt",true);//Notice 'true'
BufferedWriter bw = new BufferedWriter(fw);
PrintWriter pw=new PrintWriter(bw);
String name; //variable declaration
int rno; //variable declaration for roll number
double mks; //variable declaration for marks
//accepting data and writing in file
for(int i=1; i<=n; i++)
{ //input information from the user
System.out.println("Enter name "); name=sc.next();
System.out.println("Enter Roll No."); rno=sc.nextInt();
System.out.println("Enter Marks "); mks=sc.nextDouble();
//write information in the text file
pw.println(rno); //writing roll number in file
pw.println(name); //writing name in file
pw.println(mks); //writing marks in file
}
pw.close(); //closing the file otherwise data will not be saved
}
static void readTextFile()throws Exception
{ 
//to open the existing data file in input mode
FileReader fr = new FileReader("stud.txt");
BufferedReader br = new BufferedReader(fr);
double sum=0;
int c=0;
try //handling exception
{
while(true)
{ //reading data from file
int rno=Integer.parseInt(br.readLine());
String name=br.readLine();
double num=Double.parseDouble(br.readLine());
sum=sum+num; //sum of all marks
c++; //counting number of records
//printing on screen
System.out.println(rno+"\t"+name+"\t"+num);
}
}
catch(Exception E) //handling of exception i.e. runtime errors
{
System.out.println(“End Of File Reached…..”);
}
fr.close(); //closing of file otherwise next time we cannot open it
System.out.println("Class Average "+sum/c);
}
}//end of class
