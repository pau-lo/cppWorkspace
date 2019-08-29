/**
    C++11 or above
    main.cpp
    Purpose: infinite loop concept

    @author Paulo L.
    @version 1.0 -- 6/30/2019

*/

/*      Infinite loops
 *          - loops whose conition expression always evaluate to true
 *          - usually this is unintended and a programmer error
 *          - sometimes prgrammers use infinte loops and include break statements
 *            in the body to control them
 *
 *      sometimes infinite loops are exactly what we need
 *          - event loop in an event-driving program
 *          - operating system
 *
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    while(true) {
        char again{};
        cout << "Do you want to loop again? (Y/N): ";
        cin >> again;

        if(again == 'N' || again == 'n')
            break;
    }

    return 0;
}


