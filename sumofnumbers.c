#include<stdio.h>
#include<conio.h>
void main()
{
inti,n,sum=0;
printf("Enter the number ");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
sum=sum+i;
}
printf("The Sum of %d length is %d", n,sum);
}
