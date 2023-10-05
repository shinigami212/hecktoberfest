#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci Series up to " << n << " terms:" << endl;
    if (n >= 1) {
        int first = 0;
        int second = 1;
        cout << first << " " << second << " ";

        for (int i = 3; i <= n; i++) {
            int next = first + second;
            cout << next << " ";

            first = second;
            second = next;
        }
    } else if (n == 1) {
        cout << "0";
    }

    cout << endl; 

    return 0;
}
