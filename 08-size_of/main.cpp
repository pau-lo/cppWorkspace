// using the size of operator
// main.cpp
//

/* Using the size of operator
 *      - determines the size in bytes of a type or variable
 *      - getting the information from <climits> and <cfloat>
 *
 *       using INT_MAX, INT_MIN, LONG_MIN, LONG_MAX, FLT_MIN, FLT_MAX ...
 *
 * Examples:
 *
 *      - sizeof(int)
 *      - sizeof(double)
 *
 *      - sizeof(some_variable)
 *      - sizeof some_variable
 *
 */

#include <iostream>
#include <climits>
#include <cfloat>

using std::cout;
using std::cin;
using std::endl;

int main()
{

    cout << "======= Use values of SIZES information " << endl;
    cout << "=========================================" << endl;
    cout << endl;

    cout << "char: " << sizeof(char) << " bytes." << endl;
    cout << "int: " << sizeof(int) << " bytes." << endl;
    cout << "short: " << sizeof(short) << " bytes." << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
    cout << "long: " << sizeof(long) << " bytes." << endl;
    cout << "long long: " << sizeof(long long) << " bytes." << endl;
    cout << endl;

    cout << "=========================================" << endl;
    cout << endl;

    cout << "float: " << sizeof(float) << " bytes." << endl;
    cout << "double: " << sizeof(double) << " bytes." << endl;
    cout << "long double: " << sizeof(long double) << " bytes." << endl;
    cout << endl;

    cout << "======= Use values of MIN and MAX information" << endl;
    cout << "==========================================" << endl;
    cout << endl;

    cout << "Minimum values: " << endl;
    cout << endl;

    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << INT_MIN << endl;
    cout << "unsigned int: " << INT_MIN << endl;
    cout << "long: " << INT_MIN << endl;
    cout << "long long: " << INT_MIN << endl;
    cout << endl;

    cout << "==========================================" << endl;
    cout << endl;

    cout << "Maximum values: " << endl;
    cout << endl;

    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "short: " << INT_MAX << endl;
    cout << "unsigned int: " << INT_MAX << endl;
    cout << "long: " << INT_MAX << endl;
    cout << "long long: " << INT_MAX << endl;

    cout << endl;

    cout << "====== Use of size of values using variable names: " << endl;
    cout << "==========================================" << endl;
    cout << endl;
    cout << "variable names: " << endl;
    cout << endl;

    int age{ 21 };

    cout << "variable int 'age' is: " << sizeof(age) << endl;

    double hourly_rate{ 35.00 };

    cout << "variable double 'hourly_rate' is: " << sizeof(hourly_rate) << endl;

    return 0;
}
