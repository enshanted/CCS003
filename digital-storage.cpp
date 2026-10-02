/******

M4 EXERCISE Q06 - Digital Storage Capacity Report 
Faylogna, Shannalyn B.
TN02
10/02/26

Scenario: A laboratory technician records a file size in bytes and wants the program to report the same size in kilobytes, megabytes, and gigabytes using binary-based units.
Requirements:
   1. Ask for a file size in bytes using a type capable of holding large whole numbers.
   2. Use 1 KB = 1024 bytes, 1 MB = 1024 KB, and 1 GB = 1024 MB.
   3. Convert bytes to KB, MB, and GB using floating-point calculations.
   4. Display KB and MB to two decimal places and GB to four decimal places.
   5. Display the whole-number MB portion using an explicit cast.

******/

#include <iostream>
#include <iomanip>
using namespace std;

// Requirements: 1. Ask for a file size in bytes using a type capable of holding large whole numbers.
int main() {
    long long fileSizeBytes;

    cout << "Bytes = ";
    cin >> fileSizeBytes;

// Requirements: 2. Use 1 KB = 1024 bytes, 1 MB = 1024 KB, and 1 GB = 1024 MB.

// Requirements: 3. Convert bytes to KB, MB, and GB using floating-point calculations.
    double fileSizeKB =
        fileSizeBytes / 1024.0;

    double fileSizeMB =
        fileSizeKB / 1024.0;

    double fileSizeGB =
        fileSizeMB / 1024.0;

// Requirements: 4. Display KB and MB to two decimal places and GB to four decimal places.
    cout << fixed << setprecision(2);
    cout << "\nKB = " << fileSizeKB << endl;
    cout << "MB = " << fileSizeMB << endl;

    cout << setprecision(4);
    cout << "GB = " << fileSizeGB << endl;

// Requirements: 5. Display the whole-number MB portion using an explicit cast.
    long long wholeNumberMB =
        static_cast<long long>(fileSizeMB);

    cout << "Whole MB = "
         << wholeNumberMB << endl;

    return 0;
}