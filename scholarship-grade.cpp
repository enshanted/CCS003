/******
 
M4 EXERCISE Q02 - Scholarship Grade Summary
 Faylogna, Shannalyn B.
 TN02
 10/02/26

 Scenario: A scholarship office wants a quick grade-summary program. A student has four component scores and each component contributes a fixed percentage to the final grade.
 Requirements:
 1. Use these weights: quizzes 20%, laboratory 25%, project 25%, examination 30%.
    2. Ask the user for the four scores as decimal values.
    3. Compute the weighted grade using the given percentages.
    4. Display the exact weighted grade to two decimal places and also display its rounded whole-number value using round().
    5. Also display the integer-truncated version using an explicit cast so students can compare truncation with rounding.

 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
   // Requirements: 1. Use these weights: quizzes 20%, laboratory 25%, project 25%, examination 30%.
    double quizWeight = 0.20;
    double labWeight = 0.25;
    double projectWeight = 0.25;
    double examWeight = 0.30;

    // Requirements: 2. Ask the user for the four scores as decimal values.
    double quizScore, labScore, projectScore, examScore;
    cout << "Quiz = ";
    cin >> quizScore;
    cout << "Lab = ";
    cin >> labScore;
    cout << "Project = ";
    cin >> projectScore;
    cout << "Exam = ";
    cin >> examScore;

    // Requirements: 3. Compute the weighted grade using the given percentages.
    double weightedGrade =
        (quizScore * quizWeight) +
        (labScore * labWeight) +
        (projectScore * projectWeight) +
        (examScore * examWeight);

    int roundedGrade = static_cast<int>(round(weightedGrade));
    int castoInt = static_cast<int>(weightedGrade);


    // Requirements: 4. Display the exact weighted grade to two decimal places and also display its rounded whole-number value using round().
    cout << fixed << setprecision(2);
    cout << "\nWeighted grade = " << weightedGrade << endl;
    cout << "Rounded = " << roundedGrade << endl;
    cout << "Cast to int = " << castoInt << endl;

    return 0;
}