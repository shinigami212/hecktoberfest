//Program of Fibonacci Series using while loop.//
#include<stdio.h>
void main()
{
  int n,c=0,a=0,b=1;
printf("\n Program of fibonacci series");
printf("\n Enter the length of fibonacci series=");
scanf("%d",&n);
printf("Fibonacci series upto %d term=",n);
while(c<=n) 
{
printf("%d",c);
a=b;
b=c;
c=a+b;
}
}
