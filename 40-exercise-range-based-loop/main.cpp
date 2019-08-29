/**
    C++11 or beyond
    main.cpp
    Purpose: Using the range-bsed for loop through a given bector of integers and 
    determine how may elements in the vector are even divisible by either 3 or 5.

    @author Paulo L.
    @version 1.0 -- 7/01/2019

*/

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{ 
    vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};

    int count{};
    
    for (auto vec1:vec) {
        if (vec1 % 3 == 0 || vec1 % 5 == 0)
            count++;
    }
    cout << count << endl; 
    return 0;
}
