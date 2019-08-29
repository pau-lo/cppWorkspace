/**
    CS-14 Asn 6
    main.cpp
    Purpose: Conditional operator concept

    @author Paulo L.
    @version 1.0 -- 6/30/2019

*/

// similar to if-else construct bc it evaluates to a bollean expression

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int num{};

    cout << "Enter an integer: ";

    cin >> num;

    if(num % 2 == 0)
        cout << num << " is even." << endl;
    else
        cout << num << " is odd." << endl;

    // conditional operator
    cout << num << " is " << ((num % 2 == 0) ? "even." : "odd.") << endl;

    // example 2

    int num1{}, num2{};

    cout << "\nEnter two integers spearated by a space: ";
    cin >> num1 >> num2;

    if(num1 != num2) {
        cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl;
        cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
    } else {
        cout << "The numbers are the same." << endl;
    }

    return 0;
}