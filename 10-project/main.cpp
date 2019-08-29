
/*
 *
 * Room  Cleaning Service
 * charge $60 per room
 * Sale tax rate in ca: 7.25%
 * Estimates are valid for 7 days
 *
 * Prompt the user for the number of rooms they would like cleaned
 * and provide an estimate such as:
 *
 * Estimate for room service:
 * Number of rooms: 3
 * Price per room: $60.00
 * Cost: $120.00
 * Tax: $13.05
 *
 * ===============================
 *
 * Total estimate: $193.05
 * This estimate is valid for 7 days
 *
 * Pseudocode:
 *
 *  Prompt the user to enter the number of rooms
 *  Display number of rooms
 *  Display price per room
 *
 *  Display cost: number of rooms x price per room
 *  Display tax: number of rooms x price per room x tax rate
 *  Display total estimate: (number of rooms x price per room x tax rate)
 *  Display estimate experation time
 *
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()

{

    cout << "Hello, Welcome to ILANAS room service." << endl;

    cout << "\nHow many rooms would you like to clean?" << endl;

    int number_of_rooms{ 0 };
    cin >> number_of_rooms;

    const double price_per_room{ 60 };
    const double sales_tax{ 0.0725 };
    const int promotion_expiration{ 7 }; // days

    cout << "\nEstimate for room cleaning service." << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << price_per_room << endl;

    double cost{ price_per_room * number_of_rooms };

    cout << "Cost: $" << cost << endl;

    double total_tax{ sales_tax * cost };

    cout << "Tax: $" << total_tax << endl;

    cout << "================================================" << endl;

    cout << "\nTotal Estimate: $" << (number_of_rooms * price_per_room + total_tax) << endl;
    cout << "\nThis estimate is valid for only " << promotion_expiration << " days." << endl;

    cout << endl;

    return 0;
}
