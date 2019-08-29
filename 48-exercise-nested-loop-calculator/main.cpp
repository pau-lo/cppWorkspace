/**
    C++11 or above
    main.cpp
    Purpose: Creating the multiplication table by using nested loops.

    @author Paulo L.
    @version 1.0 -- 7/02/2019

*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{

    for(int num1{ 1 }; num1 <= 10; ++num1) {
        for(int num2{ 1 }; num2 <= 10; ++num2) {
            cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
        }
        cout << "------------------" << endl;
    }

    cout << endl;
    return 0;
}