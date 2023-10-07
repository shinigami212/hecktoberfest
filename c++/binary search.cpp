// c++ program to implement iterative binary search
#include<bits/stdc++.h>
using namespace std;
// an iterative binary search function.
int binarysearch(int arr[],int l, int r,int x)
  {
while(l<=r)
{
int m=1+(r-1)/2:
// check if x is present at mid 
if (arr[m]==x)
  return m;
// if x is greater, ignore left half
if(arr[m]<x)
  l=m+1;
// if x is smaller, ignore right half
else r=m-1;
}
// if we reach here, then element was not present 
return -1;
}
//driver code
int main(void)
{
int arr[]={2,3,4,10,40};
int x=10;
int n= sizeof(arr)/sizeof(arr[0]);
int result= binary search(arr,0,n-1,x);
(result==-1)
  ? cout<<"element is not present in array"
  : cout<<"element is presnt at index"<< result;
return 0;
}
