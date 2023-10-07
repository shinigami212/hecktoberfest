#include<iostream>
using namespace std;
int fact(int n,int r);
int main(){
    int n,r;
    cout<<"Enter the n: ";
    cin>>n;
    cout<<"Enter the r: ";
    cin>>r;
    int npr= fact(n,r);
    cout<<"The NPR is: "<<npr;
    return 0;
}
int fact(int n,int r){
    int nfact=1;
    int rfact=1;
    for (int i = 2; i <=n; i++)
    {
        nfact=nfact*i;
    }
    for (int j= 2; j <=r; j++)
    {
        rfact=rfact*j;
    }
    return nfact/rfact;
}
