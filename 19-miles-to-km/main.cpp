// Convert miles to Km
// 
// main.cpp
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    

    // 1 mi = 1.609344 km
    const double miles_to_kms{1.609344};
    
    cout << "Welcome to the MILES to KILOMETERS converter:  " << endl;
    
    cout << "Enter the value in Miles: ";
    
    double kms{0.0};
    double miles{0.0};
    
    cin >> miles;
    
    kms = miles * miles_to_kms;
    
    cout << kms << " Kilometers is equivalent to " << miles << " miles. " << endl;
    
    
    return 0;
}