/**
    C++11 or above
    main.cpp
    Purpose: c style strings

    @author Paulo L.
    @version 1.0 -- 6/30/2019

*/

/*
 *   Sequence characters
 *      - contiguous in memory
 *      - implemented as an array of characters
 *      - terminated by a null character (null)
 *          - null - character with a value of zero
 *      - referred to as zero or null terminated strings
 *
 *    String literal
 *
 *      - sequence of characcters in double quotes, e.g. "Paulo"
 *      - constant
 *      - terminated with null character
 *
 *     example:
 *
 *     char my_name[] {'Paulo'};
 *
 *                P | a | u | l | o | \0
 *
 *     it will allocate 6 values for the null value at the end
 *
 *
 *    Functions that work wiht c-style functions strings
 *
 *      - copying
 *      - concatenation
 *      - comparison
 *      - searching
 *      - and others
 *
 *
 *
 */

#include <iostream>
#include <cstring> // for c-style functions
#include <cctype>  // for character-based functions

using std::cout;
using std::cin;
using std::endl;

int main()
{

    char first_name[20]{}; // initialization
    char last_name[20]{};
    char full_name[20]{};
    char temp[50]{};

    //    cout << "Please enter your first name: ";
    //    cin >> first_name;
    //
    //    cout << "Please enter you last name: ";
    //    cin >> last_name;
    //
    //    cout << "----------------------------" << endl;
    //
    //    cout << "Hello, " << first_name << " your last name has " << strlen(first_name) << " characters." << endl;
    //    cout << "Also, and your last name " << last_name << " has " << strlen(last_name) << " characters." << endl;
    //
    //    strcpy(full_name, first_name); // copy first name to full name
    //    strcat(full_name, " ");        // concatenate full_name and a space
    //    strcat(full_name, last_name);  // concatenate last_name and full_name
    //    cout << "Your full name is " << full_name << endl;

    cout << "----------------------------" << endl;
    cout << "Enter your full name: " << endl;
    cin.getline(full_name, 50);
    cout << "Your full name is " << full_name << endl;

    cout << "----------------------------" << endl;
    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " are different " << endl;
    cout << "---------------------------" << endl;

    for(size_t i{ 0 }; i < strlen(full_name); ++i) {
        if(isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    cout << "Your full name is " << full_name << endl;

    cout << "--------------------------" << endl;
    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " are different " << endl;

    cout << "---------------------------" << endl;
    cout << "Result of camparing " << temp << " and " << full_name << ": " << strcmp(temp, full_name) << endl;
    cout << "Result of camparing " << full_name << " and " << temp << ": " << strcmp(full_name, temp) << endl;

    return 0;
}
