#include <iostream>
using namespace std;

int gcd(int n1,int n2)
{
    int gcd;

    if ( n2 > n1) {     // swapping variables n1 and n2 if n2 is greater than n1
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }
 
    for (int i = 1; i <=  n2; ++i) {     // run a loop from 1 to greatest no and change the value of gcd to the value of i both number are divisible by
        if (n1 % i == 0 && n2 % i ==0) {
            gcd = i;
        }
    }
   
    return gcd; // return the value of gcd
}

int main() {
  int n1, n2, hcf;
  cout << "Enter two numbers: ";
  cin >> n1 >> n2;

  cout << "GCD :"<< gcd(n1,n2);

  return 0;
}
