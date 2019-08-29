//
// using logical operators
//
// main.cpp

/*      Logical operators examples:
 *      ---------------|-----------------
 *      Operator       |     Meaning
 *      ---------------|-----------------
 *      not (!)        |     negation        
 *                     |     
 *      and (&&)       |     logical and  
 *                     |
 *      or (||)        |     logical or
 *
 *      
 */ 

#include <iostream>

using std::cout;
using std::cin;
using std::boolalpha;
using std::endl;



int main() {
    
    int num{};
    
    const int lower{10};
    const int upper{20};
    
    cout << boolalpha;
    
    // Determine if an entered integer is between tow oter integers
    // assume lower < upper

    cout << "Enter an integer -  where the bounds are " << lower << " and " << upper << ": ";
    cin >> num;
    
    bool within_bounds {false};
    
    within_bounds = (num > lower && num < upper);
    cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl;
    
    // Determine if an entered integer is outside two toher integers
    // assume lower < upper
    cout << "\nEnter an integer -  where the bounds are " << lower << " and " << upper << ": ";
    cin >> num;
    
   
    bool outside_bounds{false};
    outside_bounds = (num < lower || num > upper);
    cout << num << " is outside " << lower << " and " << upper << ": " << outside_bounds << endl;


    // Determine if an entered integer is outside two toher integers
    // assume lower < upper
    cout << "\nEnter an integer -  where the bounds are " << lower << " and " << upper << ": ";
    cin >> num;
    
   
    bool on_bounds{false};
    on_bounds = (num == lower || num == upper);
    cout << num << " is on one of the bounds which are " << lower << " and " << upper << ": " << on_bounds << endl;
    
    return 0;
}






