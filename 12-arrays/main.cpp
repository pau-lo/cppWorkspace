//
// array examples
// main.cpp
//

/* Arrays (Dictionaries): It's a colletion of elements
 *  - fixed sized
 *  - elements ar all the same type
 *  - stored contiguously in memory
 *  - individual elemetns can accessed by their position or index
 *
 *  - first element is at index 0
 *  - last element is at index szie -1
 *
 *  - always initlalize arrays (best practice)
 *  - very efficient
 *  - iteration (looping) is often used process
 *
 *   Declaring an array
 *
 *   Element_type array_name [constant number of elements];
 *   Element_type array_name [number of elements] {init list};
 *
 *
 *
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    char vowels[]{ 'a', 'e', 'i', 'o', 'u' };

    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;

    double hi_temps[]{ 90.1, 89.8, 77.5, 81.6 };
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;

    hi_temps[0] = 100.7; // set the first elements in hi_temps to 100.7
                         // this is an assignment statement
    cout << "The first high tempereature is now: " << hi_temps[0] << endl;

    // int test_scores[5]; // since never intialized we'll get junk
    // int test_scores[5]{};  // this will initialzed everything to zero.
    int test_scores[]{ 100, 90, 80, 70, 60 }; // Now it will initialize 5 arrays

    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    cout << "\nEnter 5 new test scores: " << endl;
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    cout << "\nThe update array of test scores are: " << endl;
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    cout << "\nNotice what the value of the array name is: " << test_scores
         << endl; // test_scores name will be the memory location where the array its located

    return 0;
}