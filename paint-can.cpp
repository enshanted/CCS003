/******
 
M4 EXERCISE Q04 - Paint Can Estimator
 Faylogna, Shannalyn B.
 TN02
 10/02/26

 Scenario:A facilities team is repainting a rectangular wall. Paint is sold only by whole cans, so the program must determine how many cans are required.
 Requirements:
    1. Ask for wall width, wall height, number of coats, and coverage per can in square meters.
    2. Compute wall area = width x height.
    3. Compute total paint area = wall area x number of coats.
    4. Compute the exact number of cans as total paint area / coverage per can.
    5. Use ceil() to determine the whole number of cans that must be purchased.
    6. Display wall area and exact cans to two decimal places, then display cans to buy as a whole number.

***/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double wallWidth;
    double wallHeight;
    int numberOfCoats;
    double coveragePerCan;

// Requirements: 1. Ask for wall width, wall height, number of coats, and coverage per can in square meters.
    cout << "Width (Meters) = ";
    cin >> wallWidth;

    cout << "Height (Meters) = ";
    cin >> wallHeight;

    cout << "Coats = ";
    cin >> numberOfCoats;

    cout << "Coverage (Square Meters) = ";
    cin >> coveragePerCan;

// Requirements: 2. Compute wall area = width x height.
    double wallArea = wallWidth * wallHeight;

// Requirements: 3. Compute total paint area = wall area x number of coats.
    double totalPaintArea = wallArea * numberOfCoats;

// Requirements: 4. Compute the exact number of cans as total paint area / coverage per can.
    double exactCans = totalPaintArea / coveragePerCan;

// Requirements: 5. Use ceil() to determine the whole number of cans that must be purchased.
    int cansToBuy = static_cast<int>(ceil(exactCans));

// Requirements: 6. Display wall area and exact cans to two decimal places, then display cans to buy as a whole number.
cout << fixed << setprecision(2);
cout << "\nWall area = " << wallArea << endl;
cout << "Total paint area = " << totalPaintArea << endl;
cout << "Exact cans = " << exactCans << endl;

cout << setprecision(0);
cout << "Cans to buy = " << cansToBuy << endl;

    return 0;
}