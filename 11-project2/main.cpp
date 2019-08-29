// Using declared constants
// main.cpp
//

/*
 *
 * Ilana's Room Cleaning Service
 *
 * We have two types: large rooms and small rooms
 * charge for small room: $ 45.00
 * charge for large room: $ 55.00
 *
 * Sale tax rate in ca: 7.25% (California taxes)
 * Estimates are valid for 7 days
 *
 * Prompt the user for the number of rooms they would like cleaned
 * and provide an estimate such as:
 *
 * Estimate for room service:
 *
 * Number of small rooms: 1
 * Number of large rooms: 1
 * Price per small room: $45.00
 * Price per large room: $55.00
 * Cost: $ 100.00
 * Tax: $ 7.25
 *
 * ===============================
 *
 * Total estimate: $107.25
 * This estimate is valid for 7 days
 *
 * Pseudocode:
 *
 *  Prompt the user to enter the number of rooms
 *  Display number of rooms
 *  Display price per room
 *
 *  Display cost:
 *  Display tax:
 *  Display total estimate:
 *  Display estimate experation time
 *
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{

    cout << "Hello, Welcome to ILANAS Cleaning Room Service." << endl;

    int number_of_small_rooms{ 0 };
    cout << "\nHow many small rooms would you like to clean?" << endl;
    cin >> number_of_small_rooms;

    int number_of_large_rooms{ 0 };
    cout << "\nHow many large rooms would you like to clean?" << endl;
    cin >> number_of_large_rooms;

    const double price_per_small_rooms{ 45.0 };
    const double price_per_large_rooms{ 55.0 };
    const double sales_tax{ 0.0725 };    // sales tax for california
    const int promotion_expiration{ 7 }; // days

    cout << "\nEstimate for room cleaning service." << endl;
    cout << "\nNumber of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    cout << "Price per small rooms: $" << price_per_small_rooms << endl;
    cout << "Price per large rooms: $" << price_per_large_rooms << endl;

    double small_room_cost{ price_per_small_rooms * number_of_small_rooms };
    double large_room_cost{ price_per_large_rooms * number_of_large_rooms };

    double total_room_cost{ small_room_cost + large_room_cost };

    cout << "Cost: $" << total_room_cost << endl;

    double total_tax{ sales_tax * total_room_cost };

    cout << "Tax: $" << total_tax << endl;

    cout << "================================================" << endl;

    cout << "\nTotal Estimate: $" << (total_room_cost + total_tax) << endl;
    cout << "\nThis estimate is valid for only " << promotion_expiration << " days." << endl;

    cout << endl;

    return 0;
}
