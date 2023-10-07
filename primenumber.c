#include<stdio.h>
void main()
{
intn,i,flag=0;
printf("Enter the number :: ");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
printf("Number %d is not prime",n);
flag=1;
break;
} }
if(flag==0)
printf("Number %d is prime",n);
}
