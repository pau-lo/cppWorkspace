//
//
// main.cpp
//
// cout, cin, cerr, clog example. 
// they all represent streams 
//


#include <iostream>

using std::cout;  
using std::cin;
using std::endl;


int main() {
    
    /*cout << "Hello World!!!" << endl;
    
    cout << "World!!!" << endl;
    
    cout << "Hello" << "World!!!" << endl;
    
    cout << "Hello World!!!" << endl;
    
    cout << "Hello\nOut\nThere!!!" << endl;*/
    
    
    int num1;
    
    int num2;
    
    double num3;
    
    //cout << "Enter an integer: ";
    
    //cin >> num1;
    
    //cout << "You entered: " << num1 << endl;
    
    
    //cout << "Enter a first integer: ";
    
    //cin >>  num1;
    
    //cout << "Enter a second integer: ";
    
    //cin >>  num2;
    
    //cout << "You entered " << num1 << " and " << num2 << endl;
    
    
    //cout << "Enter 2 integers separated with a space: ";
    
    //cin >> num1 >> num2;
    
    //cout << "You entered: " << num1 <<  " and " << num2 << "." << endl;
    
    // ----------------------------
    
    
    //cout << "Enter a double: ";
    
    //cin >>  num3;
    
    //cout << "You have entered " << num3 << endl; 
    
    // -----------------------------------------
    
    cout << "Enter an integer: " ;
    
    cin >> num1;
    
    cout << "Enter an double: " ;
    
    cin >> num3;
    
    cout << "The integer is: " << num1 << endl;
    cout << "And the double is: " << num3 << endl;
    
    return 0;
}

