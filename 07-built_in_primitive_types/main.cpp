//
// Built-in primitive data types 
// main.cpp
// 

/*
 * Character types
 * 
 * Integer types
 *      - signed and unsigned
 * 
 * Floating-point types
 *      Used to represent non-integeer numbers (mantissa & exponents)
 *      - float
 *      - double 
 *      - long double
 * 
 * Boolean type
 *      Used to represent true (non-zero) and false (0)
 *      - true
 *      - false
 * 
 * Integer types
 *      - used to represent whole numbers
 *          - short
 *          - int 
 *          - long
 *          - long long
 *      - signed and unsigned versions
 * 
 * Size and precision is often compiler-dependent
 * 
 *    - #include <climits>
 * 
 */


#include <iostream>

using std::cout;  
using std::cin;
using std::endl;      


int main() {
    
    // Charater type

//     char middle_initial {'D'};  // Notice the single quotes around the characters
//     cout << "My middle inital is "  << middle_initial << "."<< endl;
    
    
    // Integer types
    
    unsigned short int exam_score {55}; 
    cout << "My exam score was " << exam_score << "." << endl;
    
    int countries_represented {65};
    cout << "There were " << countries_represented << " countries represented in my meeting." << endl;
    
    long people_in_florida {20610000};
    cout << "There are about " << people_in_florida << " people in Florida." << endl;
    
    long long people_on_earth {7'600'000'000};
    cout << "There are about " << people_on_earth << " people on Earth." << endl;
    
    long long distance_to_alpha_centauri {9'461'000'000'000};
    cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers." << endl;


    // Floating point types
    
    float car_payment {399.23};
    cout << "My car payment is $" << car_payment << endl;
    
    double pi {3.14159};
    cout << "PI is " << pi << endl;
    
    long double large_amount {2.7e120};
    cout << large_amount << " is a very large number." << endl;
    
    // Boolean type
    bool gameOver {false};
    cout << "The value of gameOver is " << gameOver << "." << endl;
//    
//    
//    // Overflow example
    short value1 {30'000};
    short value2 {1'000};
    short product{value1 * value2}; // int will make it work
//
//    cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;
    
    return 0;
}