/**
    C++11 or beyond
    main.cpp
    Purpose: While loops concepts
    @author Paulo L.
    @version 1.0 -- 7/01/2019

*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{

    // infinite loop example 1
    //    int i{ 1 }; // initialization to 1
    //
    //    while(i <= 5) {        // looping condition <=5
    //        cout << i << endl; // display the number
    //        ++i;               // important -- incrementing by 1
    //    }
    //
    //    cout << endl;

    // checking for even numbers example 2

    //    int k{ 1 };
    //
    //    while(k <= 10) { // looping condition <=5
    //        if(k % 2 == 0)
    //            cout << k << endl; // display the number
    //        ++k;                   // important -- incrementing by 1
    //    }
    //
    //    cout << endl;

    // array example 3
    //    int scores[]{ 100, 90, 80 };
    //    int j{ 0 };
    //
    //    while(j < 3) {
    //        cout << scores[j] << endl;
    //        ++j;
    //    }
    //
    //    cout << endl;

    // Using input validation example 4

    //    int number{};
    //
    //    cout << "Enter an integer less than 100: ";
    //    cin >> number;
    //
    //    while(number >= 100) {
    //        cout << "Enter an integer less than 100";
    //        cin >> number;
    //    }
    //
    //    cout << "Thanks" << endl;
    //
    //    cout << endl;

    // input validation for a number between 1 and 5 example 5
    //    int x;

    //    cout << "Enter an integer between 1 and 5: ";
    //    cin >> number;
    //
    //    while(number <= 1 || number >= 5) {
    //        cout << "Enter an integer between 1 and 5: ";
    //    }
    //
    //    cout << "Thanks" << endl;
    //
    //    cout << endl;

    //
    cout << endl;

    //  countdouwn example

    int y{};

    cout << "Enter a positive integer - start the countdown: ";
    cin >> y;

    while(y >= 0) {
        cout << y << endl;
        y--; // decrementing
    }

    cout << "Blastoff!" << endl;

    cout << endl;

    // updown example.

    int up{};

    cout << "Enter a positive integer - start the updown: ";
    cin >> up; // counting up to whatever they type in

    int u{ 1 }; // we will countdown to 1 in this case
    while(up >= u) {
        cout << u << endl;
        u++; // incrementing u
    }

    cout << "Blast! on!!!" << endl;

    cout << endl;

    // entering a number

    int nume{};

    cout << "Enter an integer less than 100: ";
    cin >> nume;

    while(nume >= 100) { // !(number < 100)
        cout << "Enter an integer less than 100: ";
        cin >> nume;
    }

    cout << "Thanks!!!" << endl;

    cout << endl;

    // number between 1 and 5

    // validation - boolean flag example 6

    bool done{ false };
    int num{ 0 };

    while(!done) {
        cout << "Enter an integer between 1 and 5: ";
        cin >> num;

        if(num <= 1 || num >= 5)
            cout << "Out of range, try again" << endl;
        else {
            cout << "Thanks!" << endl;
            done = true;
        }
    }

    return 0;
}
