#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll n;
    cout << "Enter the number of terms of fibonacci sequence you want: ";
    cin >> n;
    ll prev= 1, prevprev = 0;
    cout << "0 1 ";
    for(int i = 2; i < n; i++){
        ll j = prev + prevprev;
        cout << j << " ";
        prevprev = prev;
        prev = j;
    }
    cout << endl;
    return 0;
}
