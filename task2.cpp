#include <iostream>
using namespace std;
double add(double a, double b);
double sub(double a, double b);
double mul(double a, double b);
double divi(double a, double b);
void calculate(int choice, double num1, double num2);

int main() {
    double number1, number2;
    int choice;

    cout << "--------BASIC CALCULATOR--------" << endl;
    cout << "1. Addition (+)\n2. Subtraction (-)\n3. Multiplication (*)\n4. Division (/)" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;

    calculate(choice, number1, number2);

    return 0;
}
double add(double a, double b) {
    return a + b;
}
double sub(double a, double b) {
    return a - b;
}
double mul(double a, double b) {
    return a * b;
}
double divi(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}
void calculate(int choice, double num1, double num2) {
    switch (choice) {
        case 1:
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << sub(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << mul(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << divi(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice! Please select a valid operation." << endl;
    }
}
