/**
    CS++11 or above
    main.cpp
    Purpose: Calculate a vector of integers.
    @author Paulo L.
    @version 1.0 -- 7/01/2019

*/

/*      While loop exercise
 *
 *      Given a vector of integers, determine how many integers are present before
 *      you see the valie -99. Note, it's possible -99 is not in the vector!
 *      If -99 is not in the vector then the result will be equal to the number of
 *      elements in the vector.
 *
 *      The final result should be stored in an integer variale named count.
 *
 *      -----------------------------------------------------------------------
 *
 *      Given a vector of integers, count the number of integers that you see in the
 *      vector before you see -99
 *
 *      {1,2,3,-99}   will result in 3
 *      {1,2,3,4,5,-99,0,5,6}  will result in 5
 *      { }   will result in 0
 *
 *      If there is no -99 in the vector then the result is the number of integers in the vector
 *
 *      {1, 2} will result in 2
 *
 */

#include <iostream>
#include <vector>
using namespace std;

int count_numbers(const vector<int>& vec)
{
    //---- WRITE YOUR CODE BELOW THIS LINE----

    /*int count {0};

        while(vec.at(count) != -99 || vec.size(count != -99)) {
            count++;
        }
      */

    /*The single ampersand is in the parameter list and indicates pass-by-reference. We'll talk about functions and
     pass-by-reference in a few sections. It does not affect this exercise. You can simply use vec and loop through it
     using a while loop.

     vec.size() doesn't start at zero. vec.size() is the size of the vector. We want to loop while we are still within
     the bounds of the vector and the current element is not -99.

     I used count as a separate variable to hold the final return result. You can use index in this example as well.
     */

    int count{ 0 };
    size_t index{ 0 }; // Most compilers will defined size_t as a synonym for unsigned int.
                       // size_t is the same type as is returned by the sizeof operator.

    size_t is the same type as is returned by the sizeof operator.

        while(index < vec.size() && vec.at(index) != -99)
    {
        ++count;
        ++index;
    }
//    
//    int count{0};
//
//    int i {0};
//
//    while(i < vec.size() && vec[i] != -99){
//
//    ++count;
//
//    ++i;
//
//    }
    

    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
    return count;
}
