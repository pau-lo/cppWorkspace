// Convert EUR to USD
// 
// main.cpp
//




#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    

    // 1 EUR = 1.13717 USD
    const double dollars_to_euros{1.13717};
    
    cout << "Welcome to the EUR to USD converter:  " << endl;
    
    cout << "Enter the value in EUR: ";
    
    double euros{0.0};
    double dollars{0.0};
    
    cin >> euros;
    
    dollars = euros * dollars_to_euros;
    
    cout << euros << " Euros is equivalent to " << dollars << " dollars. " << endl;
    
    
    return 0;
}