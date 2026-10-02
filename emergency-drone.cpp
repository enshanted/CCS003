/******

M4 EXERCISE Q07 - Emergency Drone Distance Calculator
Faylogna, Shannalyn B.
TN02
10/02/26

Scenario: A rescue drone flies in a 2D coordinate map. Operators enter the starting point and target point, and the program computes the straight-line distance.
Requirements:
   1. Ask for x1, y1, x2, and y2 as floating-point values.
   2. Compute dx = x2 - x1 and dy = y2 - y1.
   3. Use the distance formula sqrt(pow(dx, 2) + pow(dy, 2)).
   4. Display dx, dy, and the final distance to three decimal places.
   5. Display the rounded whole-unit distance using round().

******/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Requirements: 1. Ask for x1, y1, x2, and y2 as floating-point values.
int main() {
    double x1, y1;
    double x2, y2;

    cout << "Start (x1): ";
    cin >> x1;

    cout << "Start (y1): ";
    cin >> y1;

    cout << "Target (x2): ";
    cin >> x2;

    cout << "Target (y2): ";
    cin >> y2;

// Requirements: 2. Compute dx = x2 - x1 and dy = y2 - y1.
    double dx = x2 - x1;
    double dy = y2 - y1;

// Requirements: 3. Use the distance formula sqrt(pow(dx, 2) + pow(dy, 2)).
    double distance =
        sqrt(pow(dx, 2) + pow(dy, 2));

    int roundedDistance =
        static_cast<int>(round(distance));

// Requirements: 4. Display dx, dy, and the final distance to three decimal places.
    cout << fixed << setprecision(3);
    cout << "\ndx = " << dx << endl;
    cout << "dy = " << dy << endl;
    cout << "Distance = " << distance << endl;

// Requirements: 5. Display the rounded whole-unit distance using round().
    cout << "Rounded distance: "
         << roundedDistance << endl;

    return 0;
}