#include <iostream>
#include <bitset>

int main() {
    int decimalNumber;

    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    std::bitset<32> binary(decimalNumber);

    std::cout << "Binary equivalent: " << binary << std::endl;

    return 0;
}
