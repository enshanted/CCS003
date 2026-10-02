/******

M4 EXERCISE Q10 - Online Store Invoice and Shipping Boxes
Faylogna, Shannalyn B.
TN02
10/02/26

Scenario: An online store needs a console invoice. The customer purchases one product type in multiple units. Items are packed into boxes with a fixed capacity, and the invoice shows the product name, pricing breakdown, and number of boxes required.
Requirements:
   1. Use getline() to read a product name that may contain spaces.
   2. Ask for unit price, quantity, discount percentage, shipping fee per box, and units per box.
   3. Compute subtotal, discount amount, and discounted merchandise total.
   4. Compute the exact boxes using floating-point division and use ceil() for the boxes required.
   5. Compute shipping total and final amount due.
   6. Print a formatted receipt using newline and tab escape sequences.

******/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

// Requirements: 1. Use getline() to read a product name that may contain spaces.
int main() {
    string productName;
    double unitPrice;
    int quantity;
    double discountPercentage;
    double shippingFee;
    int unitsPerBox;

    cout << "Product = ";
    getline(cin, productName);

// Requirements: 2. Ask for unit price, quantity, discount percentage, shipping fee per box, and units per box.
    cout << "Price = ";
    cin >> unitPrice;

    cout << "Qty = ";
    cin >> quantity;

    cout << "Discount = ";
    cin >> discountPercentage;

    cout << "Ship/box = ";
    cin >> shippingFee;

    cout << "Units/box = ";
    cin >> unitsPerBox;

// Requirements: 3. Compute subtotal, discount amount, and discounted merchandise total.
    double subtotal =
        unitPrice * quantity;

    double discountAmount =
        subtotal * (discountPercentage / 100.0);

    double discountedTotal =
        subtotal - discountAmount;

// Requirements: 4. Compute the exact boxes using floating-point division and use ceil() for the boxes required.
    double exactBoxes =
        static_cast<double>(quantity) / unitsPerBox;

    int boxesRequired =
        static_cast<int>(ceil(exactBoxes));

// Requirements: 5. Compute shipping total and final amount due.
    double shippingTotal =
        boxesRequired * shippingFee;

    double finalAmountDue =
        discountedTotal + shippingTotal;

// Requirements: 6. Print a formatted receipt using newline and tab escape sequences.
    cout << fixed << setprecision(2);

    cout << "\nSubtotal = " << subtotal << endl;
    cout << "Discount = " << discountAmount << endl;
    cout << "Merchandise = " << discountedTotal << endl;
    cout << "Exact boxes = " << exactBoxes << endl;

    cout << setprecision(0);
    cout << "Boxes = " << boxesRequired << endl;

    cout << fixed << setprecision(2);
    cout << "Shipping = " << shippingTotal << endl;
    cout << "Amount due = " << finalAmountDue << endl;

    return 0;
}