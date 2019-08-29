//
// vectors
// main.cpp
//

/*      Vectors
 * 
 *       - is an array that can grow and shrink in size at exectuon time
 *       - it can grow and shrink in size at execution time
 *       - provides similar semantics and syntax as arrays
 *       - very efficient
 *       - can provide bound checking
 *       - can use lots of cool fiunctions like sort, reverse, find and more.
 * 
 *      When we creae a vector we are creating an object
 * 
 *      Declaring a vector
 * 
 *      #include <vector>
 *      
 *      vector <char> vowels;
 * 
 *      vector <int> test_scores;
 * 
 * 
 * 
 * 
 */

#include <iostream>
#include <vector>  // for vector operations

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
    
    //vector <char> vowels;   // empty
    //vector <char> vowels (5);  // 5 initialized to zero
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'}; // initialized list
    
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;
    
//    vector <int> test_scores(3);  // 3 elements all initialized to zero
//    vector <int> test_scores(3, 100); // 3 elements all initialized to 100
    vector <int> test_scores{100, 98, 89};  // size 3 vector elements of integers initialized in a list
    
    cout << "\nTest scores using array syntax: " << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;
    
    
    cout << "\nTest scores using vector syntax: "  << endl;
    
    cout << test_scores.at(0) << endl; // using the at method to give me the value at that specific index
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    // this will return how many items are in the vector right now
    // since a vector can grow and shrink dynamicall sometimes you need to ask how big is it
    cout << "\nHow big are you vector?  What's your size? " << endl;
    cout << "\nThere are "  << test_scores.size() << " scores in the vector. " << endl;
    
    
    cout << "\nEnter 3 test scores: ";
    cin >> test_scores.at(0);  // input 3 new test scores frm the consoles
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);
    
    cout << "\nUpdated test scores: " << endl;
    
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl; 
    cout << test_scores.at(2) << endl;
    
    // This is the dynamic part of a vector
    
    cout << "\nEnter a test score to add to the vector: ";
    
    int score_to_add{0};  // read the new scores into this integer variable with initialization to 0
    cin >> score_to_add;
    
    test_scores.push_back(score_to_add); // push that new integer at the back of the vector
                                        // if the vector needs to increase in size it will
    
    cout << "\nEnter one more test score to add to the vector: ";

    cin >> score_to_add;
    
    test_scores.push_back(score_to_add);
    
    cout << "\nTest scores are now: " << endl;
    
    // we should now have 5 integers
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl; 
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;
    
    // we should expect a 5 here
    cout << "\nThere are "  << test_scores.size() << " scores in the vector. " << endl;
    
    // cout << "This should cause an exception!!" << test_scores.at(10) << endl;
    
    
    //Example of a 2D-vector or a vector of vectors
    
    vector <vector<int>> movie_ratings
    {
        {7, 5, 6, 10}, 
        {9, 10, 10, 9},
        {8, 6, 7, 8}
    };
    
    cout << "\nHere are the movie rating for reviewer #1 using array syntax: " << endl;
    
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;
    
    cout << "\nHere are the movie rating for reviewer #1 using vector syntax: " << endl;
    
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;

    cout << "\nHere are the movie rating for reviewer #2 using vector syntax: " << endl;

    cout << movie_ratings.at(1).at(0) << endl;
    cout << movie_ratings.at(1).at(1) << endl;
    cout << movie_ratings.at(1).at(2) << endl;
    cout << movie_ratings.at(1).at(3) << endl;
    
    return 0;
}
