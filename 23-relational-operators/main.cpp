//
// relational operators
// main.cpp
//

/*
 *      relational operators
 *      operator            meaning
 *      >                   greater than
 *      >=                  greater than or equal to
 *      <                   less than
 *      <=                  less than or equal to
 *      <=>                 three-way comparison (c++ 20)
 *
 *
 */

#include <iostream>

using std::cout;
using std::cin;
using std::boolalpha;
using std::endl;

int main()
{

    
    int num1{}, num2{};

    cout << boolalpha;
    cout << "Enter 2 integers separated by a space: ";
    cin >> num1 >> num2;

    cout << num1 << " > " << num2 << ": " << (num1 > num2)  << endl;
    cout << num1 << " >= " << num2 << ": " << (num1 >= num2)  << endl;
    cout << num1 << " < " << num2 << ": " << (num1 < num2)  << endl;
    cout << num1 << " <= " << num2 << ": " << (num1 <= num2)  << endl;


    const int lower{10};
    const int upper{20};

    cout << "\nEnter an integer that is greater than " << lower << ": ";
    cin >> num1;
    cout << num1 << " > " << lower << " is " << (num1 > lower) << "." << endl;
    
    cout << "\nEnter an integer that is less than or equal to " << upper << ": ";
    cin >> num1;
    cout << num1 << " <= " << upper << " is " << (num1 <= upper) << "."<< endl;
    
    return 0;
}
