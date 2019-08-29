/**
    C++11 or above
    main.cpp
    Purpose: Using nested loops to create a histogram

    @author Paulo L.
    @version 1.0 -- 7/02/2019

*/

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    int num_items{};

    cout << "How many data items do you want to record?\n";
    cin >> num_items;

    // storing the info as vector to make it as big as we needed
    vector<int> data{}; // calling aour vector data

    // looping from the number they entered
    for(int i{ 1 }; i <= num_items; ++i) {
        int data_item_num{};
        cout << "Enter data number value " << i << " : ";
        cin >> data_item_num;          // reading that integer
        data.push_back(data_item_num); // putting that data into the vector
    }

    cout << "\nHere are the values that you input: " << endl;
    cout << "\nDisplaying Histogram\n" << endl;

    // using a ranged base loop
    for(auto val : data) {
        for(int i{ 1 }; i <= val; ++i) {
            cout << "-"; // displaying a histogram for the values
        }

        cout << " " << val << endl;
        cout << endl;
    }

    cout << endl;

    return 0;
}
