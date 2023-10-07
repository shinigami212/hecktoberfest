//Program to convet decimal number to binary number.//
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int[10],n,j; 
  system("cls");
printf("Enter the number to convert=");
scanf("%d",&n);
for(i=;n>0;i++)
{
a[i]=n%2;
n=n/2;
}
printf("\n Binary form of given number=");
for(i=1;i>=0;i--)
{
printf("%d",a[i]);
}
return 0;
}
