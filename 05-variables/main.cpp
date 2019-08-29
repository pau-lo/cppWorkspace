//
// intializing and declaring variables
// main.cpp
// 

#include <iostream>

using std::cout;  
using std::cin;
using std::endl;


int main() {
    
    //int room_width {0};  // some choose to declare it here but ...
    //int room_length {0};
    
    cout << "Enter the width of the room: " << endl;
    int room_width {0}; // Best practice is to initialize variables to some known value 
    cin >> room_width;
    
    cout << "Enter the length of the room: " << endl;
    int room_length {0};
    cin >> room_length;
    
    cout << "The 'Area' of the room is " << room_width * room_length
    << " square feet. " << endl;
    
    
    return 0;
}
