/******

M4 EXERCISE Q05 - Conference Table Arrangement
Faylogna, Shannalyn B.
TN02
10/02/26

Scenario: A conference organizer needs to arrange round tables. Each table has a fixed number of seats, and every attendee must have a seat.
Requirements:
   1. Ask for number of attendees and seats per table.
   2. Compute the exact table requirement using explicit floating-point conversion.
   3. Use ceil() to compute the number of tables required.
   4. Compute total available seats and unused seats.
   5. Display the results with the exact table requirement to two decimal places.

******/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Requirements: 1. Ask for number of attendees and seats per table.
int main() {
    int attendees;
    int seatsTable;

    cout << "Attendees = ";
    cin >> attendees;

    cout << "Seats/table = ";
    cin >> seatsTable;

// Requirements: 2. Compute the exact table requirement using explicit floating-point conversion.
    double exactTables =
        static_cast<double>(attendees) / seatsTable;

// Requirements: 3. Use ceil() to compute the number of tables required.
    int tablesRequired =
        static_cast<int>(ceil(exactTables));

// Requirements: 4. Compute total available seats and unused seats.
    int totalSeats =
        tablesRequired * seatsTable;

    int unusedSeats =
        totalSeats - attendees;

// Requirements: 5. Display the exact table requirement to two decimal places plus the whole-number results.
    cout << fixed << setprecision(2);

    cout << "\nExact tables: " << exactTables << endl;

    cout << setprecision(0);
    cout << "Tables required = " << tablesRequired << endl;
    cout << "Total seats = " << totalSeats << endl;
    cout << "Unused seats = " << unusedSeats << endl;

    return 0;
}