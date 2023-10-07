class encryption
{

int n;

String A[]=sc.nextLine();

void input( int A[n])

{

for( int i=0; i<=n; i++)

{

System.out.println( " Enter a sentence");

A[i]= sc.nextLine();

}

}

void encrypt( )

{

for( int i=0; i<= n; i++)

{

if( ( i%2)==0)

{

String str="";

StringTokenizer st = new StringTokenizer();

int cw= st.countToken();

for(int i=1; i<=cw; i++)

{

String wrd= st.nextToken();

str= wrd+ str;

}

A[i]= str;

}

else

{

int Len= A[i]. length ();

for( int j=0; j<= Len; j++)

{

char ch= A[i].charAt(j);

int x=ch;

if(x>=65&&x<=90)||(x>=97&&x<=122)

x=x+2;

x=ch;

}

}

}

void display ()

{

for(int i=0; i<= n; i++)

System.out.println(A[i]);

}

void main()

{

Encryption obj= new Encryption ();

obj.input();

obj.encrypt();

obj.display();

}

}
