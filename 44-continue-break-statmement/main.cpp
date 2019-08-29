/**
    C++11 or above
    main.cpp
    Purpose: Continue and break statements concepts

    @author Paulo L.
    @version 1.0 -- 6/30/2019

*/

/*
 *      continue:
 *          - no further statemetns in the body of the loop are executed
 *          - control immediately goes directly to the beginning of the loop for the
 *            next iteration
 *
 *      break
 *          - no further staemetns in the body of the loop are exectued
 *          - loop is immediately terminated
 *          - control immediately goes to the statement following the loop construc
 *
 *
 *
 */

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{

    vector<int> values{ 1, 2, -1, 3, -1, -99, 7, 8, 9, 10 };

    for(auto val : values) {
        if(val == -99)
            break;
        else if(val == -1)
            continue;
        else
            cout << val << endl;
    }

    return 0;
}
