/**
    C++11 or above
    main.cpp
    Purpose: nested loop concept

    @author Paulo L.
    @version 1.0 -- 6/30/2019

*/

/*  --------- Nested loops: ---------------
 *      - loop nesed within anohter loop
 *      - can be as many levels deep as the program needs
 *      - very useful with nulti-dimensional data structures
 *      - outer vs. inner loop
 *
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{

    int outer_val{}, inner_val{};

    for(outer_val{ 1 }; outer_val <= 2; ++outer_val) {
        for(inner_val{ 1 }; inner_val <= 3; ++inner_val) {
            cout << outer_val << " , " << inner_val << endl; // outer_val , inner_val
        }
    }
    return 0;
}