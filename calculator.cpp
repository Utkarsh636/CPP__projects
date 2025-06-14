#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /, %, ^, s for square root, c for cube root): ";
    cin >> operation;

    if (operation == '%' || operation == '+' || operation == '-' || operation == '*' || operation == '/' || operation == '^') {
        cout << "Enter second number: ";
        cin >> num2;
    }

    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;

        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;

        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;

        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;

        case '%':
            if (num2 != 0 && num1 == static_cast<int>(num1) && num2 == static_cast<int>(num2)) {
                cout << "Result: " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
            } else if (num2 == 0) {
                cout << "Error: Division by zero!" << endl;
            } else {
                cout << "Error: Modulus operator requires integer operands!" << endl;
            }
            break;

        case '^':
            cout << "Result: " << pow(num1, num2) << endl;
            break;

        case 's':
            if (num1 >= 0) {
                cout << "Square root of " << num1 << " is " << sqrt(num1) << endl;
            } else {
                cout << "Error: Square root of negative number!" << endl;
            }
            break;

        case 'c':
            cout << "Cube root of " << num1 << " is " << cbrt(num1) << endl;
            break;

        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
