// increment and decrement operators
//
// main.cpp

/*      Increment operator ++
 *      Decrement operator --
 * 
 *      can be used with integers, floating point types and pointers
 * 
 *      Prefix:      ++num
 *      Postfix:     num++
 * 
 * 
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    int counter{10};
    int result{0};
//    
//    // Example 1 - simple increment
//    cout << "Counter: " << counter << endl; // display 10
//    
//    counter = counter + 1;
//    cout << "Counter: " << counter << endl; // display 11
//    
//    
//    counter++; // increment operator
//    cout << "Counter: " << counter << endl; // incrementing by 1 so it should give 12
//    
//    ++counter; // increment operator
//    cout << "Counter: " << counter << endl; // increment the counter by 1 now it's 13
//     
    
    // Example 2 --- pre-increment
    
    counter = 10;
    result = 0;    
      
    cout << "Counter: " << counter << endl;  // will give 10
      
    result = ++counter; //Note the pre-increment  before it's use it will increment counter = counter + 1
    
    cout << "Counter: " << counter << endl; // 11
    cout << "Result: " << result << endl;  //11
      
    // Examplel 3 - psot-increment
    counter = 10;
    result = 0;    
    
     // Example 3 --- post-increment
    
    counter = 10;
    result = 0;    
      
    cout << "Counter: " << counter << endl;  // will give 10
      
    result = counter++; //Note the post-increment  before it's use it will increment counter = counter + 1
    
    cout << "Counter: " << counter << endl; // 11
    cout << "Result: " << result << endl;  //10
    
    // Example 4
    
    counter = 10;
    result = 0;    
      
    cout << "Counter: " << counter << endl;  // will give 10
      
    result = ++counter + 10; //Note the post-increment  before it's use it will increment counter = counter + 1
    
    cout << "Counter: " << counter << endl; // 11
    cout << "Result: " << result << endl;  // 21
    
    // Example 5
    
    counter = 10;
    result = 0;    
      
    cout << "Counter: " << counter << endl;  // will give 10
      
    result = counter++ + 10; //Note the post-increment  before it's use it will increment counter = counter + 1
                            // result = counter + 10 = 10 + 10 = 20
                            // counter = counter + 1
    
    cout << "Counter: " << counter << endl; // 11
    cout << "Result: " << result << endl;  // 20
    
    
    return 0;
}