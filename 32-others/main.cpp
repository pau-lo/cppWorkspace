//
//  nested-if-statements
//
//  mainc.pp

/*      Examples:
 *
 *      if (score > 90)
 *        if (score > 95)
 *          cout << "A+";
 *        else
 *          cout << "A";
 *
 *      cout << "Sorry, No A";
 *
 *      ------------------------------------
 *
 *
 *      if expression is true then execute statement1
 *
 *      if the expression is false then execute statement2
 *
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

    int score{};

    cout << "Enter your score on the exam (0-100): ";
    cin >> score;

    char letter_grade{};

    if (score >= 0 && score <= 100)
    {
        if (score > 90)
            letter_grade = 'A';
        else if (score > 80)
            letter_grade = 'B';
        else if (score > 70)
            letter_grade = 'C';
        else if (score > 60)
            letter_grade = 'D';
        else
            letter_grade = 'F';
        cout << "\nYour letter grade is: " << letter_grade << endl;

        if (letter_grade == 'F' || letter_grade == 'D')
            cout << "\nSorry, you must repeat this class. " << endl;
        else
            cout << "\nCongrats, you have passed the class!" << endl;
    }
    else
    {
        cout << "Sorry, " << score << " is not in range." << endl;
    }

    cout << endl;
    return 0;
}
