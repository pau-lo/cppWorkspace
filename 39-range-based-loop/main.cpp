/**
    C++11 or beyond
    main.cpp
    Purpose: Ranged-based for loop concepts.

    @author Paulo L.
    @version 1.0 -- 7/01/2019

*/

/*          Ranged-based for loop
 *                 - introduced in c++11
 *
 *          Syntax example
 *
 *          for (var_type var_name: sequence) // sequence is the values of the range
 *              statement;  // can use var_name
 *
 *
 *          for (var_type var_name: sequence) {
 *              statement;  // can use var_name
 *          }
 *
 *
 */

#include <iostream>
#include <vector>  // for creating vectors
#include <iomanip> // use for precision

using std::cout;
using std::cin;
using std::endl;
using std::vector;       // for creating vectors
using std::fixed;        // exact value
using std::setprecision; // how many digits to show

int main()
{

    //    int scores[] {100,97,88};

    // using the range based for loop
    //    for (int score : scores)
    //        cout << score << endl;

    //    for (auto score : scores)   // auto will deduce the type itself
    //        cout << score << endl;

    //    vector<double> temps {87.2, 77.1, 80.0, 72.5};
    //
    //    double average_temp {};
    //    double running_sum {};
    //
    //    for (auto temp: temps)
    //        running_sum += temp;
    //
    //    average_temp = running_sum/ temps.size();
    //
    //    cout << average_temp;

    // iterate over strings

    //    for (auto c: "\nPablo")
    //        cout << c << endl;
    //

    cout << endl;

    int scores[]{ 10, 20, 30 };

    for(auto score : scores) // tell the compiler to figuire out the type
        cout << score << endl;

    cout << endl;

    // vector
    //
    vector<double> temperatures{ 87.9, 77.9, 80.0, 72.5 };

    double average_temp{};
    double total{};

    for(auto temp : temperatures)
        total += temp;

    if(temperatures.size() != 0)
        average_temp = total / temperatures.size();

    cout << fixed << setprecision(1);
    cout << "Average temperature is: " << average_temp << endl;

    cout << endl;

    for(auto val : { 1, 2, 3, 4, 5 })
        cout << val << endl;

    cout << endl;

//    for(auto c : "This is a freaking test!")
//        cout << c;
        
    for(auto c : "This is just a test!")
        if (c != '')
            cout << c;
            
    cout << endl;

    return 0;
}
