//
// Global variables
// main.cpp
//

#include <iostream>

using std::cout;  
using std::cin;
using std::endl;

int age {18};  // Global variable


int main() {
    
    int age {16};   // Local variables within the scope of main
    
    cout << age << endl;
    
    return 0;s
}