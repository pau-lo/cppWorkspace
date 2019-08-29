//
//  main.cpp
//

/*
 *      For this program I will be using US dollars and cents.
 *
 *      Write a program that asks the user to enter the following:
 *      An integer representing the number of cents
 *
 *
 *      You may assume that the number of cents entered is greater than or equal to zero
 *
 *      The program should then display how to provide that cahnge to the user.
 *
 *
 *      In the US:
 *
 *      1 dollar 100 cents
 *      1 quarter is 25 cents
 *      1 dime is 10 cents
 *      1 nickel is 5 cents
 *      1 penny is 1 cent
 *
 *      Output:
 *
 *      Enter an amount in cents: 92
 *
 *      You can provide this change as follows:
 *
 *      dollars:   0
 *      quarters:  3
 *      dimes:     1
 *      nickels:   1
 *      pennies:   2
 *
 *      Feel free to use your own currency system
 *      Also, think of how you might solve the problem using the modulo operator
 *
 *      Have fun and test your program
 *
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{

    // define conversion values in cents -- i
    const int dollar_value{ 100 };
    const int quarter_value{ 25 };
    const int dime_value{ 10 };
    const int nickel_value{ 5 };

    int change_amount;

    // solution 2 -- using the modulo operator

    cout << "Enter an amount in cents: ";
    cin >> change_amount;

    
    int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};
    
    //balance = dollars = quarters = dimes = pennies = 0; // reset everything to zero

    dollars = change_amount / dollar_value;
    balance = change_amount % dollar_value;

    quarters = balance / quarter_value;
    balance %= quarter_value;

    dimes = balance / dime_value;
    balance %= dime_value;

    nickels = balance / nickel_value;
    balance %= nickel_value;

    pennies = balance;

    cout << "\nYou can provide this change as follows:" << endl;

    cout << "Dollars: " << dollars << endl;

    cout << "Quarters: " << quarters << endl;

    cout << "Dimes: " << dimes << endl;

    cout << "Nickels: " << nickels << endl;

    cout << "Pennies: " << pennies << endl;

    cout << endl;

    return 0;
} 