/******

M4 EXERCISE Q08 - Tuition Installment Calculator
Faylogna, Shannalyn B.
TN02
10/02/26

Scenario: A student pays tuition through an installment plan. The school adds a processing fee and then divides the balance into equal monthly payments.
Requirements:
   1. Ask for base tuition, processing-fee percentage, down-payment amount, and number of monthly installments.
   2. Compute the processing fee from the base tuition.
   3. Compute adjusted tuition = base tuition + processing fee.
   4. Compute remaining balance = adjusted tuition - down payment.
   5. Compute and display the monthly installment and all monetary results to two decimal places.

******/

#include <iostream>
#include <iomanip>
using namespace std;

// Requirements: 1. Ask for base tuition, processing-fee percentage, down-payment amount, and number of monthly installments.
int main() {
    double baseTuition;
    double processingFeePercentage;
    double downPayment;
    int numInstallments;

    cout << "Tuition = ";
    cin >> baseTuition;

    cout << "Fee = ";
    cin >> processingFeePercentage;

    cout << "Down = ";
    cin >> downPayment;

    cout << "Months = ";
    cin >> numInstallments;

// Requirements: 2. Compute the processing fee from the base tuition.
    double processingFee =
        baseTuition * (processingFeePercentage / 100.0);

// Requirements: 3. Compute adjusted tuition = base tuition + processing fee.
    double adjustedTuition =
        baseTuition + processingFee;

// Requirements: 4. Compute remaining balance = adjusted tuition - down payment.
    double remainingBalance =
        adjustedTuition - downPayment;

// Requirements: 5. Compute and display the monthly installment and all monetary results to two decimal places.
    double monthlyInstallment =
        remainingBalance / numInstallments;

    cout << fixed << setprecision(2);
    cout << "\nProcessing fee = " << processingFee << endl;
    cout << "Adjusted tuition = " << adjustedTuition << endl;
    cout << "Balance = " << remainingBalance << endl;
    cout << "Monthly = " << monthlyInstallment << endl;

    return 0;
}