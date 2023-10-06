#include <iostream>
#include <vector>

using namespace std;

vector<int> primeFactors(int n) {
    vector<int> factors;
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 2) {
        factors.push_back(n);
    }
    return factors;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    vector<int> factors = primeFactors(num);

    cout << "Prime factors of " << num << " are: ";
    for (int i = 0; i < factors.size(); i++) {
        cout << factors[i] << " ";
    }
    cout << endl;

    return 0;
}
