/**
 FAYLOGNA - M6 SEATWORK
 
 1.	Write a program to check if the number is positive and 
 how many digits the number has using if statement. 

 If the inputted number is zero or a negative number, 
 it should display, “It is a non-positive number”. 

 The maximum digits of the number that can be entered by the user should be four only. 
 */

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "FAYLOGNA - M6-1" << endl;
    cout << "Enter a number (maximum of four digits): ";
    cin >> n;

    if (n <= 0) {
        cout << "It is a non-positive number";
    } else if (n > 9999) {
        cout << "Enter a number with a maximum of four digits.";
    } else if (n <= 9) {
        cout << "It is a positive number with 1 digit.";
    } else if (n <= 99) {
        cout << "It is a positive number with 2 digits.";
    } else if (n <= 999) {
        cout << "It is a positive number with 3 digits.";
    } else {
        cout << "It is a positive number with 4 digits.";
    }

    return 0;
}