// mixed typed expressoins examples
//
// main.cpp
//


/*
 *  
 *  Mixed Typed Expressoins examples:
 *  
 *  Ask the user to enter 3 integers 
 *  Calculate the sum of the integers then
 *  calculate the aveerage of the 3 integers
 * 
 *  Display the 3 integers entered 
 *  the sum of the 3 integers and 
 *  the average of te 3 integers
 * 
 * 
 */ 


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    int total{};
    int num1{}, num2{}, num3{}; // initialization to 0
    const int count {3};
    
    cout << "Enter 3 integers separated by spaces: ";
    
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    
    
    //calculate the average
    double average {0.0};
    
    average = static_cast<double>(total) / count;
    // average = (double)total/count;  old cpp style 
    
    cout << "The 3 numbers were: " << num1 << "," << num2 << "," << num3 << endl;
    
    cout << "The sum of the numbers is: " << total << endl;
    
    cout << "The average of the numbers is: " << average << endl;
    
    return 0;
}