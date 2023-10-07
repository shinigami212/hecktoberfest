#include<iostream>
using namespace std;
int fact(int n,int r);
int main(){
    int n,r;
    cout<<"Enter the n:";
    cin>>n;
    cout<<"Enter a r:";
    cin>>r;
   int ncr=fact(n,r);
     cout<<"The NCR is :"<<ncr;
     return 0;
}
  int fact(int n,int r){
    int nfact=1; //n!
    int rfact=1; //r!
    int nrfact=1; //n-r !
    for (int i = 2; i <=n; i++)
    {
        nfact=nfact*i;
    }
    for (int j= 2; j <=r; j++)
    {
        rfact=rfact*j;
    }
    for (int i = 2; i <=n-r; i++)
    {
        nrfact=nrfact*i;
    }
  return nfact/(rfact*nrfact);
}
