/**
    C++11 or above
    main.cpp
    Purpose: c++ style strings 

    @author Paulo L.
    @version 1.0 -- 7/15/2019

*/

/*      C++ Strings
 * 
 *      std::string is a Class in the STL Standard Template Library
 *      
 *      #include <string>
 *      - contiguos in memory
 *      - dynamic size
 *      - work with input and output streams
 *      - lost of useful memeber functions
 *      - our familiar arithmetic operators can be used  
 *      - can be easily onverted to C-style strings if needed
 *      - safer -- it provides methods that can bound check
 * 
 *      
 * 
 *      Declaring and initializing
 * 
 *      #include <string>
 * 
 *      string s1;                  // empty
 *      string s2 {"Frank"};        // Frank
 *      string s3 {s3};             // Frank
 *      string s4 {"Frank", 3};     // Fra
 *      string s5 {s3, 0 , 2};      // Fr
 *      string s6(3, 'x');          // xxx
 * 
 *      Also, using the assignment operator
 * 
 *      Assignment = 
 * 
 *      string s1;  // empty 
 *      s1 = "C++ Rocks!";
 * 
 *      string s2 {"Hello"};
 *      s2 = s1;
 * 
 *      Concatenation
 * 
 *      stirng part1 {"C++"};
 *      string part2 {"is a powerful"};
 * 
 *      string sentence;
 * 
 *      sentence = part1 + " " + part2 + " language";
 *                 
 *      illegal use of concatenation in c++
 * 
 *      sentence = "C++" + " is a powerful"; //
 * 
 * 
 *      Accessing characters[] and at() method
 * 
 *      string s1;
 *      string s2 {"Frank"};
 * 
 *      cout << s2[0] << endl; // F
 *      cout << s2.at(0) << endl; // F
 * 
 *      s2[0] = 'f';  // frank
 *      s2.at(0) = 'p';  // prank
 * 
 * 
 *      Note:
 * 
 *      The object are compared character by character lexically. A < a
 * 
 *      You can compare strings and objects
 * 
 *      Comparing examples: only in looping or if statements
 * 
 *      string s1 {"Apple"}'
 *      string s2 {"Banana"};
 * 
 *      s1 == s2  // False
 *      
 * 
 *       Example of Substrings - substr()
 * 
 * 
 *       object.substr(start_index, length)
 * 
 *       string s1 {"This is a test"};
 * 
 * 
 *       cout << s1.substr(0,4);    // This
 *       cout << s1.substr(5,2);    // is
 *       cout << s1.substr(10,4);  // test
 *      
 *       Removing Characters - erase() and clear()
 * 
 *       Removes a substring of characters from a std::string
 * 
 *       syntax 
 * 
 *          object.erase(start_index, length)
 * 
 *      
 *       The length method()
 * 
 *          syntax
 * 
 *          object.length()
 * 
 *       
 *        Input method  >> getline()
 * 
 *        string s1; 
 *        cin >> s1;   // only accepts up to the first space
 * 
 *        geline(cin, s1);  // Reads the entire line until \n
 * 
 * 
 *         getline(cin, s1, 'x');  // this isx
 * 
 * 
 *          
 * 
 * 
 * 
 * 
 */
 




#include <iostream>


int main()
{

    std::cout << "C++ strings!!!" << std::endl;

    return 0;
}