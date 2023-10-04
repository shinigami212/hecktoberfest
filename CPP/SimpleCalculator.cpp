#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    // Prompt user for input
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    
    cout << "Enter two numbers a and b to calculate a <operator> b: ";
    cin >> num1 >> num2;

    // Perform the calculation based on the operator
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1; // Exit with an error code
            }
            break;
        default:
            cout << "Error: Invalid operator" << endl;
            return 1; // Exit with an error code
    }

    // Display the result
    cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;

    return 0; // Exit successfully
}
