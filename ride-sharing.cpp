/******
 
M4 EXERCISE Q03 - Ride-Sharing Fare Split
 Faylogna, Shannalyn B.
 TN02
 10/02/26

 Scenario: A ride-sharing group wants to split a trip cost. The trip includes a base fare, distance charge, toll fee, and a percentage-based booking fee.
 Requirements:
    1. Ask for base fare, distance in kilometers, rate per kilometer, toll fee, booking-fee percentage, and number of passengers.
    2. Compute distance charge = distance x rate per kilometer.
    3. Compute pre-fee total = base fare + distance charge + toll.
    4. Compute booking fee from the pre-fee total, then compute the grand total.
    5. Compute and display the amount each passenger pays to two decimal places.

***/

#include <iostream>
#include <iomanip>
using namespace std;

// Requirements: 1. Ask for base fare, distance in kilometers, rate per kilometer, toll fee, booking-fee percentage, and number of passengers.
int main() {
    double baseFare;
    double distance;
    double ratePerKilometer;
    double tollFee;
    double bookingFeePercentage;
    int numPassengers;

    cout << "Base: ";
    cin >> baseFare;

    cout << "Distance: ";
    cin >> distance;

    cout << "Rate per kilometer: ";
    cin >> ratePerKilometer;

    cout << "Toll fee: ";
    cin >> tollFee;

    cout << "Fee: ";
    cin >> bookingFeePercentage;

    cout << "Passengers: ";
    cin >> numPassengers;

// Requirements: 2. Compute distance charge = distance x rate per kilometer.
    double distanceCharge = distance * ratePerKilometer;

// Requirements: 3. Compute pre-fee total = base fare + distance charge + toll.
    double preFeeTotal =
        baseFare + distanceCharge + tollFee;

// Requirements: 4. Compute booking fee from the pre-fee total, then compute the grand total.
    double bookingFeeAmount =
        preFeeTotal * (bookingFeePercentage / 100.0);

    double grandTotal =
        preFeeTotal + bookingFeeAmount;

    double amountPerPassenger =
        grandTotal / numPassengers;

// Requirements: 5. Compute and display the amount each passenger pays to two decimal places.
    cout << fixed << setprecision(2);

    cout << "\nDistance charge: " << distanceCharge << endl;
    cout << "Pre-fee total: " << preFeeTotal << endl;
    cout << "Booking fee: " << bookingFeeAmount << endl;
    cout << "Total: " << grandTotal << endl;
    cout << "Passenger: " << amountPerPassenger << endl;

    return 0;
}