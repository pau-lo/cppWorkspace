/**
    CS-14 Asn 6
    main.cpp
    Purpose: Looping operator concepts
    @author Paulo L.
    @version 1.0 -- 6/30/2019

*/

// -------------------------------------------------------------

/*
 *  Iteration
 *  The third building block of programming:
 *      - sequence, selection, iteration
 * 
 *  iteration or repetition C++ constructs
 * 
 *      - for loop
 *          - iterate a specific number of times
 * 
 *      - range-based for loop
 *          - one iteration for each element in a range or collection
 * 
 *      - while loop
 *          - iterate while a condiotn remains true
 *          - stop wen the condition becomes false
 *          - check the condition at the beginning of evey iteration
 * 
 *      - do-while loop
 *          - iterate while a condtion remains true
 *          - stop when the ciondtion becomes false
 *          - check the conditon at the end of every iterations
 *  
 * 
 */ 


#include <iostream>
#include <vector>


using std::cout;
using std::cin;
using std::endl;
using std::vector;


int main()
{

    // syntax example
    // for (initialization ; condition ; increment)
    //      statement;
    
    
    // example 1: initialization style
    for (int i {1}; i <= 5; ++i) //
        cout << i << endl;
        
    cout << endl;
    
    // example 2: assignment style
    for (int i  = 1; i <= 5; ++i) //
        cout << i << endl;
        
    cout << endl;

    // example 3: testing for i if is an even number
    for (int i {1}; i <=10; ++i) {
        if (i % 2 == 0)
            cout << i << endl;
    }
    
    cout << endl;
    
    // example 4: loop within an array
    int scores[] {100,90,87};
    
    for (int i {0}; i <= 3; ++i) {
        cout << scores[i] << endl;
    }
    
    cout << endl;
    
    for (int i {0}; i <=2; ++i) {
        cout << scores[i] << endl;
    }
    
    cout << endl;
    
    
    char letter[] {'m','y','n', 'a', 'm','e','i','s', 'p', 'a', 'u', 'l', 'o'};
    
    for (int i{}; i<=12; ++i){
        cout << letter[i] << endl;
    }
    
    cout << endl;
    
    
    // comma operator
    for (int i {1}, j {5}; i <= 10; ++i, ++j) {
        cout << i << " + " << j << " : " << (i + j) << endl;
    }
    
    /*  the basic for loop is very clear and conscie 
        since the for loop's expression aar all optional, it is possible to have
            - no initilization
            - no test
            - no increment
    */
    
    cout << endl;
    
    for (int i {1}; i <=10; i+=2){
        cout << i << endl;
    }
    
    cout << endl;
    
    // example of decrementing 
    for (int i {10}; i > 0; --i){ // counting down
        cout << i << endl;
        
    }
    
    cout << "Blastoff!" << endl;
    
    cout << endl;
    
    
    // something divisible by 3
    
    for(int i{2}; i<=100; i+=10){
        if(i % 3 == 0)  // mod 3 is divisible by 3
            cout << i << endl;
    }
    
    
    cout << endl; 
    
    
    // 
    for (int i{0}, j{3}; i <= 6; ++i, ++j) {
        cout << i << " * " << j << " = " << (i * j) << endl;
    }
    
    cout << endl;
    
    // 
    for (int i {1}; i<=30; ++i) {
        cout << i;  // print i
        if (i % 5 == 0) // check for every 5th item
            cout << endl;
        else
            cout << " "; // a space in between them
        
    }
    
    cout << endl;
    
    
    
    // using a vector  --- not working
    
    vector<int> vec{10,20,30,40,50};
    
    for (unsigned int i{0}; i < vec.size(); i++)
        cout << vec[i] << endl;
    
    return 0;
}
