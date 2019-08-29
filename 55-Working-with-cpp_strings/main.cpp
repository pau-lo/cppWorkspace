/**
    C++11 or above
    main.cpp
    Purpose: C++ string class examples

    @author Paulo L.
    @version 1.0 -- 7/19/2019

*/

#include <iostream>
#include <iomanip>
#include <string>

using std::endl;
using std::cin;
using std::cout;
using std::string;
using std::boolalpha;

int main()
{

    string s0;
    string s1{ "Apple" };
    string s2{ "Banana" };
    string s3{ "Kiwi" };
    string s4{ "apple" };
    string s5{ s1 };       // apple
    string s6{ s1, 0, 3 }; // App
    string s7(10, 'X');    // XXXXXXXXXXXX  Note: x's in single quotes bc is a character
                           // using parenthesis since is a constructor initilization
                           // That example is using constructor-style initialization since we want a string of 10 X's.
    // If we use initializer-style (curlys) we initialize the string with each of the characters or ASCII Codes

    //    cout << s0 << endl;          // No Garbage
    //    cout << s0.length() << endl; // empty string
    //
    //    // initialization
    //    cout << "\nInitialization"
    //         << "\n-------------------------------" << endl;
    //    cout << "s1 is initialzed to: " << s1 << endl;
    //    cout << "s2 is initialzed to: " << s2 << endl;
    //    cout << "s3 is initialzed to: " << s3 << endl;
    //    cout << "s4 is initialzed to: " << s4 << endl;
    //    cout << "s5 is initialzed to: " << s5 << endl;
    //    cout << "s6 is initialzed to: " << s6 << endl;
    //    cout << "s7 is initialzed to: " << s7 << endl;
    //
    //    // working with operators for comparing
    //
    //    cout << "\nComparisons"
    //         << "\n--------------------------------" << endl;
    //    cout << boolalpha;
    //    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
    //    cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
    //    cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
    //    cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
    //    cout << s2 << " > " << s2 << ": " << (s2 > s1) << endl;
    //    cout << s4 << " == " << s5 << ": " << (s4 < s5) << endl;
    //    cout << s1 << " == "
    //         << "Apple"
    //         << " : " << (s1 == "Apple") << endl;

    //    // Assigments
    //    cout << "\nAssignment"
    //         << "\n---------------------------" << endl;
    //
    //    s1 = "Watermelon";
    //    cout << "s2 is now: " << s2 << endl; // Watermelon
    //
    //    s2 = s1;
    //    cout << "s2 is now: " << s3 << endl; //  Watermelon"s
    //
    //    s3 = "Paulo";
    //    cout << "s3 is now: " << s3 << endl; // Paulo
    //
    //    s3[0] = 'C';                                              // Caulo
    //    cout << "s3 changed first letter to 'C': " << s3 << endl; // Caulo
    //
    //    s3.at(0) = 'S';
    //    cout << "s3 changed first letter to 'S': " << s3 << endl; // Saulo

    // Concatenation

    cout << "\nConcatenation"
         << "\n--------------------------------" << endl;

    s3 = s5 + " and " + s2 + " juice.";  // Apple and Banana juice
    cout << "s3 is now: " << s3 << endl; // Diplaying s3

    // s3 = "nice" + "cold" s5 + "juice";  // compile error: has 2 c like string literals

    // for loop: string collection

    cout << "\nLooping"
         << "\n-----------------------------" << endl;

    s1 = "Apple"; // initializing s1 to apple

    // size_t is an unsigned integer type; used for when sizes are used
    // the .length() method of a std::string returns a size_t.
    // That's because the length of a string must be unsigned (zero or positive)

    for(size_t i{ 0 }; i < s1.length(); ++i) // initializing i to 0, i is size_t, i is always a non-negative number
        cout << s1.at(i);                    // or s1[i] but the at method does bounce checking // Apple
    cout << endl;

    // Using the based range for loop

    for(char c : s1) // for every character in c in s1, output all of it and then stop
        cout << c;   // Apple
    cout << endl;

    // Substring
    cout << "\nSubstring"
         << "\n--------------------------------" << endl;

    s1 = "This is a test";

    cout << s1.substr(0, 4) << endl; // This
    cout << s1.substr(5, 2) << endl; // is
    cout << s1.substr(10, 4) << endl;

    // Erase
    cout << "\nErase"
         << "\n--------------------------------" << endl;

    s1 = "This is a test";

    s1.erase(0, 5); // Erase all of it
    cout << "s1 is now: " << s1 << endl;

    // getline
    cout << "\nGetline"
         << "\n--------------------------------" << endl;

    string full_name{};

    cout << "Please enter your full name: ";
    getline(cin, full_name);

    cout << "Your full name is: " << full_name << endl;

    // Find
    cout << "\nFind-----------------------" << endl;

    s1 = "The secret word is Boo";
    string word{};

    cout << "Enter the word to find: ";
    cin >> word;

    size_t position = s1.find(word);
    if(position != string::npos)
        cout << "Found " << word << " at positon: " << position << "." << endl;
    else
        cout << "Sorry, " << word << " not found." << endl;

    cout << endl;

    return 0;
}
