//
//  switch statements
//
//  main.cpp

/*      Syntax examples:
 *
 *          `switch (n)
        {
            case expression_1:  statemetne_1// code to be executed if n = 1;
            break;
            case expression_2: statemetne_2 // code to be executed if n = 2;
            break;
            default: statement_default // code to be executed if n doesn't match any cases
        }

 *
 *      The switch statement is a multiway branch statement. It provides an easy way to dispatch execution to different
 parts of code based on the value of the expression.
        Switch is a control statement that allows a value to change control of execution.
 *
 *      --------------------------------------------------------------------------------------
 *
 *
 *      Ask the user what grade they expect on an exam and tell them
 *       what they neeed to score to get it.
 *
 *
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{

    char letter_grade{}; // initiating an empty char

    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;

    switch(letter_grade) {
    // providing both lower and upper cases for letter A
    case 'a':
    case 'A':
        cout << "You need to score 90 or above, study hard!" << endl;
        break;

    case 'b':
    case 'B':
        cout << "You need a 80 - 90 for a B!" << endl;
        break;

    case 'c':
    case 'C':
        cout << "You need a 70 - 79 for an average grade!" << endl;
        break;

    case 'd':
    case 'D':
        cout << "You need to strive for a better grade. All you need is 60-69" << endl;
        break;

    case 'f':
    case 'F': {
        char confirm{};
        cout << "Are you sure (Y/N)? ";
        cin >> confirm;

        if(confirm == 'y' || confirm == 'Y')
            cout << "\nOK, I guess you didn't study ... " << endl;

        else if(confirm == 'n' || confirm == 'N')
            cout << "Good -- go study! " << endl;

        else
            cout << "Illegal choice" << endl;
        break;
    }

    default:
        cout << "Sorry, not a valid grade." << endl;
    }

    cout << endl;

    return 0;
}
