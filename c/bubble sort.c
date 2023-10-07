#include<stdio.h>
int main()
{
  int a[100],num,i,j,temp;
printf("\n enter total no. of elements:");
scanf("%d", &num);
printf("\n enter array elements:");
for(i=0;i<num;i++)
  scanf("%d", &a[i]);
for(i=0;i<num-1;i++)
{
  for(j=o;j<num-i-1;j++)
    {
      if(a[j]>a[j+1])
         {
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
         }
     }
}
printf("\n bubble sort is :");
for(i=0;i<num;i++)
  printf("%d\t", a[i]);
printf("\n");
return 0;
}
