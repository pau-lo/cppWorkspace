//
//  if statement
//  
//  main.cpp


/*
 *      if statement syntax 
 *      
 *      if (expr)
 *          statement;  
 * 
 *          - if the expression is true then execute the statement
 *          - if the expression is false then skip the statement 
 * 
 * 
 *       if (selection == 'A')
 *          cout << "You selected A";
 * 
 * 
 *      - Block statements 
 *          * a sequence of statements inside a block made of opening and closing brackets {}
 *          * Blocks can also contain varaiable declarations
            * Thses variables are visible only within the block - local scope
 * 
 *      Example:
 *              if (num > 10) {
 *                     ++num;
 *                     cout << "this too";
 *              }
 * 
 */ 


#include <iostream>


using std::cout;
using std::cin;
using std::endl;




int main() {
    
    int num{};
    // making sure the number are between 10 and 100
    const int min{10};  
    const int max{100};
    
    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;
    
    // doing only one statement
//    if (num >= min)
//        cout << num << " is greater than " << min <<  "." << endl;

    // doing a block for more statements 
    if (num >= min) {
        cout << "\n================= if statement 1 =================" << endl;
        cout << num << " is greater than " << min <<  "." << endl;
        
        // how far away is from min == 10
        int diff{num - min};
        cout << num << " is " << diff << " greater than " << min << "." << endl;
    }
    
    if (num <= max) {
        cout << "\n================= if statement 2 =================" << endl;
        cout << num << " is less than " << max <<  "." << endl;
        
        // how far away is from max == 10
        int diff{max - num};
        cout << num << " is " << diff << " less than " << max << "." << endl;
    }
    
    if (num >= min && num <= max) {
        cout << "\n================= if statement 3 =================" << endl;
        cout << num << " is in range " << endl;
        cout << "This means that both statement1 and 2 must display!!!" << endl;
    }
    
    if (num == min || num == max) {
        cout << "\n================= if statement 4 =================" << endl;
        cout << num << " is right on a boundary. " << endl;
        cout << "This means all 4 statements will display!!!" << endl;
        
    }
    
    cout << endl;
    return 0;
}