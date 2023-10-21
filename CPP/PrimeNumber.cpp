#include <bits/stdc++.h>

using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);

    int n;
    cin >> n;

    bool f;
    
    int cur = 0, i = 2;
    while(cur < n){
        f = true;
        for(int j = 2; j <= sqrt(i); j++){
            if (i%j == 0){
                f = false;
                break;
            }
        }
        if(f){
            cout << i << " ";
            cur++;
        }
        i++;
    }
    cout << endl;
}
