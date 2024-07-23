#include <iostream>
using namespace std;

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b != 0) return a / b;
    throw runtime_error("Division by zero!");
}

int main() {
    double num1, num2, result;
    int oper;

    cout << "Simple Calculator\n";
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (1->'+') ,(2->'-') , (3->'*') , (4->'/'): ";
    cin >> oper;

    cout << "Enter second number: ";
    cin >> num2;

    try {
        switch (oper) {
            case 1: result = add(num1, num2); break;
            case 2: result = subtract(num1, num2); break;
            case 3: result = multiply(num1, num2); break;
            case 4: result = divide(num1, num2); break;
            default: throw runtime_error("Invalid operation!");
        }
        cout << "Result: " << result << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}