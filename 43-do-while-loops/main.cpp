/**
    C++11 or beyond
    main.cpp
    Purpose: Do-while loops concepts

    @author Paulo L.
    @version 1.0 -- 7/02/2019

*/

/*
 *      Known as a post test loop
 *      Syntax:
 *
 *
 *      do {
 *          statements;
 *      } while (expression);
 *

 *
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

    // example 1 : input validation
//    int number{};
//
//    do {
//        cout << "Enter an integer between 1 and 5: ";
//        cin >> number;
//
//    } while(number <= 1 || number >= 5);
//
//    cout << "Thanks!" << endl;

    // example 2: area calculation
    char selection;

    do {
        double width{}, height{};
        cout << "Enter width and height separated by a space: ";
        cin >> width >> height;

        double area{ width * height };
        cout << "The area is " << area << endl;

        cout << "Calculate another AREA? (Y/N) : ";
        cin >> selection;
    } while(selection == 'Y' || selection == 'y');
    cout << "Thanks!" << endl;

    return 0;
}
