//
//  shipping cost calculator
//  main.cpp
//

/*
 *      Shipping Cost Calculator
 *
 *      Ask the user for package dimension in inches
 *      length, width, height -- tthese should be integers
 *
 *
 *      All dimension must be 10 inches or less or we annot ship it
 *
 *
 *      Based cost $2.50
 *
 *      if package volume is greater than 100 cubic inches her is a 10% surcharge
 *
 *      if package volume is greater than 500 cubic inches her is a 25% surcharge
 *
 *
 */



#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
    int length{}, width{}, height{};
    double base_cost{2.50};

    const int tier1_threshold{100}; // volume
    const int tier2_threshold{500}; // volume

    int max_dimension_length{10}; // inches

    double tier1_surcharge{0.10}; // 10% extra
    double tier2_surcharge{0.25}; // 25% extra

    // All dimension must be 10 inches or less

    int package_volume{};

    cout << "Welcome to the package cost calculator: " << endl;
    cout << "\nEnter the length, width, and height of the package in inches separated by spaces: " << endl;
    cin >> length >> width >> height;

    // the logic aspect
    if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length)
    {
        cout << "\nSorry, package rejected - dimension exceeded " << endl;
    }
    else
    {
        double package_cost{};
        package_volume = length * width * height;
        package_cost = base_cost;

        if (package_volume > tier2_threshold)
        {
            package_cost += package_cost * tier2_surcharge; // incrementing
            cout << "\nAdding tier 2 surcharge ... " << endl;
        }
        else if (package_volume > tier1_threshold)
        {
            package_cost += package_cost * tier1_surcharge;
            cout << "\nAdding tier 1 surcharge ... " << endl;
        }

        cout << fixed << setprecision(2);
        cout << "\nThe volume of your package is: " << package_volume << endl;
        cout << "\nYour package will cost $" << package_cost << " to ship." << endl;
    }

    cout << endl;
    return 0;
}
