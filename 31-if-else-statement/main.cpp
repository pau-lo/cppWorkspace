//
//  if-else statements
//   main.cpp
//

/*      Example:
 * 
 *          if (expr) 
 *              statement 1;
 *          else 
 *              statement 2;
 * 
 *      if the expression is true then execute statement 1
 *      if the expression is false then execute statement 2
 * 
 * 
 */ 


#include <iostream>


using std::cout;
using std::cin;
using std::endl;




int main() {
    
    int num{};
    // making sure the number are between 10 and 100
    const int target{10};  
    //const int max{100};
    
    cout << "Enter a number and it'll compare to " << target <<  ": ";
    cin >> num;

    if (num >= target) {
        cout << "\n================= Result 1 =================" << endl;
        cout << num << " is greater than or equal to " << target <<  "." << endl;
        
        // how far away is from min == 10
        int diff{num - target};
        cout << num << " is " << diff << " greater than " << target << "." << endl;
    } else {
        cout << "\n================= Result 2 =================" << endl;
        cout << num << " is less than " << target << endl;
        int diff {target - num};
        cout << num << " is " << diff << " less than " << target << "." << endl;
        
    }
        
    
    cout << endl;
    return 0;
}