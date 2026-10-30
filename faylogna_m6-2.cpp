/**
 FAYLOGNA - M6 SEATWORK
 
 2.	Write a program that allows the user to select an 
 arithmetic operator to be applied to the two floating numbers 
 inputted by the user using a switch statement.
 */

#include <iostream>
using namespace std;

int main() {
    double n1, n2;
    char arithOperator;
    // Prompt the user for input
    cout << "FAYLOGNA M6-2" << endl;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> arithOperator;
    // Switch statement
    switch (arithOperator) {
        case '+':
            cout << "Sum: " << n1 + n2;
            break;
        case '-':
            cout << "Difference: " << n1 - n2;
            break;
        case '*':
            cout << "Product: " << n1 * n2;
            break;
        case '/':
            if (n2 != 0) {
                cout << "Quotient: " << n1 / n2;
            } else {
                cout << "Cannot divide by zero.";
            }
            break;
        default:
            cout << "Invalid operator.";
    }

    return 0;
}