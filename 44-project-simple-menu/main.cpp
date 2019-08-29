/**
    C++11 or beyond
    main.cpp
    Purpose: Using do-while loop to create a simple menu

    @author Paulo L.
    @version 1.0 -- 7/02/2019

*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{

    char selection{};

    do {
        cout << "\n--------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;
        cin >> selection;

        if(selection == '1')
            cout << "\nYou chose '1' - Do this" << endl;
        else if(selection == '2')
            cout << "\nYou chose '2' - Do that" << endl;
        else if(selection == '3')
            cout << "\nYou chose '3' - Do something else" << endl;
        else if(selection == 'Q' || selection == 'q')
            cout << "\nGoodbye..." << endl;
        else
            cout << "\nUnknown option -- try again..." << endl;

    } while(selection != 'q' && selection != 'Q');

    return 0;

    cout << endl;

    return 0;
}