//
// using logical operators
//
// main.cpp


#include <iostream>

using std::cout;
using std::cin;
using std::boolalpha;
using std::endl;



int main() {
    
    
    
    bool wear_coat{false};
    double temperature{};
    int wind_speed{};
    
    const int wind_speed_for_coat{25}; // wind over this value requires coat
    const double temperature_for_coat{45};  // temperature below this value requires a coat
    
    
    cout << boolalpha;
    
    // Require a coat if either wind is too high OR temperatue is too low
    cout << "\nEnter the current temperature in (F): ";
    cin >> temperature;
    
    cout << "\nEnter the current windspeed in (mph): ";
    cin >> wind_speed;
    
    
    cout << "------------------------------------------------------" << endl;
    
    
    wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using OR? " << wear_coat << endl;
    
    
    // Require a coat if BOTH the windspeed is too high AND temperture is too low
    wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using AND? " << wear_coat << endl;    
    
    return 0;
}






