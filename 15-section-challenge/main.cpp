// challenge
// main.cpp
// 




#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;


int main() {
    
    
    vector <int> vector1;
    vector <int> vector2;
    
 
    vector1.push_back(10);
    vector1.push_back(20);
    
     cout << "\nVector1: "  << endl;
    
    cout << vector1.at(0) << endl; // using the at method to give me the value at that specific index
    cout << vector1.at(1) << endl;
    cout << "vector1 contains " << vector1.size() << " elements." << endl;

    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "\nVector2: "  << endl;
    
    cout << vector2.at(0) << endl; // using the at method to give me the value at that specific index
    cout << vector2.at(1) << endl;
    cout << "vector2 contains " << vector2.size() << " elements." << endl;


    
    return 0;
}