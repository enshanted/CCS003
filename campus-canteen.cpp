/******
 
M4 EXERCISE Q01 - Campus Canteen Group Order
 Faylogna, Shannalyn B.
 TN02
 10/02/26

 Scenario: A group of students orders identical meals from the campus canteen. The cashier needs a program that computes the subtotal, service charge, final bill, and equal share per student.
 Requirements:
 1. Ask for meal price, quantity ordered, service-charge percentage, and number of students sharing the bill.
 2. Compute subtotal = price x quantity.
 3. Compute service charge using the entered percentage, then compute the final bill.
 4. Compute each student's share using floating-point division.
 5. Display money values using fixed and setprecision(2), with clear labels.

 */

#include <iostream>
using namespace std;

int main() {
    // Requirements: 1. Ask for meal price, quantity ordered, service-charge percentage, and number of students sharing the bill
    double price;
    int quantity;
    double serviceCharge;
    int nStudents;

    cout << "Enter meal price = ";
    cin >> price;
    cout << "Enter quantity ordered = ";
    cin >> quantity;
    cout << "Service charge percentage = ";
    cin >> serviceCharge;
    cout << "Number of students sharing the bill = ";
    cin >> nStudents;

    // Requirements: 2. Computer subtotal = price x quantity
    double subtotal = price * quantity;

    // Requirements: 3. Compute service charge using the entered percentage
    double serviceChargeAmount = subtotal * (serviceCharge / 100);
    
    // Requirements: 4. Compute the final bill
    double finalBill = subtotal + serviceChargeAmount;

    // Requirements: 5. Compute each student's share using floating-point division
    double shareStudent = finalBill / nStudents;

    // Display money values using fixed and setprecision(2), with clear labels
    cout << fixed;
    cout.precision(2);
    cout << "\nSubtotal = " << subtotal << endl;
    cout << "Service Charge = " << serviceChargeAmount << endl;
    cout << "Final Bill = " << finalBill << endl;
    cout << "Share/student = " << shareStudent << endl;

    return 0;
}