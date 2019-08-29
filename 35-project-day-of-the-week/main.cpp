/**
    CS-14 Asn 6
    main.cpp
    Purpose: Displaying teh days of the week using a switch statement

    @author Paulo L.
    @version 1.0 -- 6/30/2019

*/

/*
 *  Day of the week
 * 
 *  In this exercise you will write a switch satemtent that displays the name of the day of 
 *  the week given the day code
 * 
 *  you may use the interger varaible day_code whose value we will change to 
 *  to automatically to test your code.
 *  
 *  Given the following day codes, your program should display the day of the week using a
 *  cout statemtne. 
 * 
 *      Day Code          Display
 *      --------          -------------------
 *  
 *          0               Sunday
 *          1               Monday
 *          2               Tuesday
 *          3               Wednesday
 *          4               Thursday
 *          5               Friday
 *          6               Saturday
 *        other             Erro - illegal day code
 * 
 */


#include <iostream>


using std::cout;
using std::cin;
using std::endl;


int main()
{   
    
    
    int day_of_the_week {};
    
    cout << "Enter 0 -- 6 to display the day of the week: ";
    cin >> day_of_the_week;

    switch(day_of_the_week) {
    
    case 0:
        cout << "You have selected 0: Sunday!" << endl;
        break;
        
    case 1:
    cout << "You have selected 1:  Monday!" << endl;
    break;
        
    case 2:
    cout << "You have selected 2:  Monday!" << endl;
    break;
        
    case 3:
    cout << "You have selected 3:  Tueday!" << endl;
    break;
        
    case 4:
    cout << "You have selected 4:  Wednesday!" << endl;
    break;
        
    case 5:
    cout << "You have selected 5:  Thursday!" << endl;
    break;
    
    case 6:
    cout << "You have selected 6:  Friday!" << endl;
    break;

    default:
        cout << "Sorry, not a valid day_code." << endl;
    }

    cout << endl;

    return 0;
}