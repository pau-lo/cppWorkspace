//
// testing for equality
// mainc.pp


/*
 *      Testing for Equality
 * 
 *      The == and != operators
 *      Compares the values of 2 expressions
 *      Used in control flow statements
 * 
 * 
 * 
 * 
 * 
 * 
 */

#include <iostream>


using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;
using std::noboolalpha;


int main() {
    
    bool equal_result {false};
    bool not_equal_result{false};
    
    // example with numbers
    int num1{}, num2{};
    
    cout << boolalpha; // will display true/false instead of 1/0 for booleans
    //cout << noboolalpha; 
    
    cout << "Enter two numbers (integers) separated by a space: ";
    cin >> num1 >> num2;
    
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;


    // Example with characters
    char char1{}, char2{};

    cout << "Enter two letters (characters) separated by a space: ";
    cin >> char1 >> char2;
    
    equal_result = (char1 == char2);
    not_equal_result = (char1 != char2);
    
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;
    
    // Example with doubles
    double double1{}, double2{};

    cout << "Enter two numbers (doubles) such as: '10.22' separated by a space: ";
    cin >> double1 >> double2;
    
    equal_result = (double1 == double2);
    not_equal_result = (double1 != double2);
    
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;
    
     // Example with mixed mode of a integers with a double
    

    cout << "Enter an integer (7) and a doubles (10.22) separated by a space: ";
    cin >> num1 >> double1;
    
    equal_result = (num1 == double1);
    not_equal_result = (num1 != double1);
    
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;
    
    
    
    return 0;
}