// 
// arithmetic operators examples
// 
// main.cpp

/*      arithmetic operators examples:
 *      
 *      +   addition
 *      -   subtraction
 *      *   multiplication
 *      /   division
 *      %   modulo or remainder
 * 
 * 
 */


#include <iostream>


using std::cout;
using std::endl;


int main() {
    
    int num1{200};
    int num2{100};
    
    int result{0};
    result = num1 + num2;
    
    cout << num1 << " + " << num2 << " = " << result << endl;

    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;
    
    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;
    
    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;
    
    result = num2 / num1;
    cout << "This should gives ups 0 which is not right. " << endl;
    cout << "This should gives ups 0 which is not right. " << endl;
    cout << num2 << " / " << num1 << " = " << result << endl;
    
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;
    
    // using PEMDAS
    
    result = num1 * 10 + num2;
    
    cout << result << endl;
  
    return 0;
}