/*    main.cpp
    Purpose: Calculates the area of a circle and the volume
    of a sphere.

    @author Paulo L.
    @version 1.0 -- 6/30/2019

     *
     *
     *
     * For loop Sum of Odd Integers
     *
     * Write code that uses a for loop to calculate the sum of
     * the odd integers from 1 to 15, inclusive
     *
     * The final result should include a variable name sum
     *
     *

*/

#include <iostream>

using std::cout;
using std::endl;

int main()
{

    int sum{ 0 };

    for(int i = 1; i <= 15; ++i) {
        if(i % 2 != 0) {
            cout << i << endl;
        }
    }

    return 0;
}
