/******

M4 EXERCISE Q08 - Temperature Reading Summary
Faylogna, Shannalyn B.
TN02
10/02/26

Scenario: An environmental sensor records three temperature readings. The technician wants a summary showing the average and several ways to transform that average.
Requirements:
   1. Ask for three decimal temperature readings.
   2. Compute the average temperature.
   3. Compute the absolute difference between the first and third readings using fabs().
   4. Display floor(average), ceil(average), trunc(average), and round(average).
   5. Display the original average to three decimal places.

******/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Requirements: 1. Ask for three decimal temperature readings.
int main() {
    double temp1;
    double temp2;
    double temp3;

    cout << "T1 = ";
    cin >> temp1;

    cout << "T2 = ";
    cin >> temp2;

    cout << "T3 = ";
    cin >> temp3;

// Requirements: 2. Compute the average temperature.
    double average =
        (temp1 + temp2 + temp3) / 3.0;

// Requirements: 3. Compute the absolute difference between the first and third readings using fabs().
    double absoluteDifference =
        fabs(temp1 - temp3);

// Requirements: 4. Display floor(average), ceil(average), trunc(average), and round(average).
    double floorAverage = floor(average);
    double ceilAverage = ceil(average);
    double truncAverage = trunc(average);
    double roundAverage = round(average);

// Requirements: 5. Display the original average to three decimal places.
    cout << fixed << setprecision(3);
    cout << "\nAverage = " << average << endl;
    cout << "|T1-T3| = "
         << absoluteDifference << endl;

    cout << setprecision(0);
    cout << "\nFloor = " << floorAverage << endl;
    cout << "Ceil = " << ceilAverage << endl;
    cout << "Trunc = " << truncAverage << endl;
    cout << "Round = " << roundAverage << endl;

    return 0;
}