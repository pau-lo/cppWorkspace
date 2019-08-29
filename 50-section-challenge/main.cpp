/**
    C++11 or above
    main.cpp
    Purpose:  Nested Loops - Sum of the Product of all Pairs of Vector Elements

    @author Paulo L.
    @version 1.0 -- 6/30/2019

*/

/*      Given a vector of integers named vec that is provided for you, find the sum of the 
 *      product of all pairs of vector elements.
 * 
 *      You should declare an integer variable named result and store teh final product in this variable.
 * 
 * 
 *       For example, given teh vector vec to be {2,4,6,8}, the possible pairs are 
 *         (1,2), (1,3), and (2,3).  So the result shoult be (1*2) + (1*3) + (2*3) = 11 
 * 
 * 
 *       if the vector is empty or has only 1 elemetn then the result shoulbd be 0.
 * 
 */
 

#include <vector>
using namespace std;

int calculate_pairs(vector<int> vec) {
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    int result{};   
 
    if (vec.size() > 1) {    
    for (size_t i=0; i< vec.size()-1; ++i)        
        for (size_t j=i+1; j< vec.size(); ++j)             
            result = result + vec.at(i) * vec.at(j);
    }
 


     
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return result;
}