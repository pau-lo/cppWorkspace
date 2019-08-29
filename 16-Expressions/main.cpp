// expressions


/*      Expressions syntax -- examples
 * 
 *      int x;                          // declaration
 *      favorite_number = 12;           // assignment
 *      1.5 + 2.8;                      // expression
 *      x = 2 * 5;                      // assignmetn
 *      if (a > b) cout 
 *      << "a is > than b";             // if statement
 *     
 *      Most operators in c++ are unary, binary, ternary
 *      
 * 
 *      common operators:
 * 
 *      - assignment
 *      - arithmetic
 *      - increment/decrement
 *      - relational
 *      - logical
 *      - member access
 *      - other
 *      
 * 
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main() {
    
    
//    int x = 100;   // initialization
//    int x1 {200};  // initialization
// 
//    x = 300;       // assignment 
    
    int num1{10};  // Uniform Initialization and was introduced in C++11.  
    
    int num2{20}; // initializatoin
    
    num1 = 100;  // assingment.  Changing the 10 to 100 by we using the contents of the memory address.  
                // the r-value its the content of num1 in this case is 100. 
                // The l-value is the location of that variable in this case 100.
    
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
    num1 = num2;
    
    cout << "num1 is " << num1 << endl;
 
    
    
    
    
    return 0;
}
