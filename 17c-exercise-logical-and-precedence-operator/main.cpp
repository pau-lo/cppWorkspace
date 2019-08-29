/**
    C++11 or above
    main.cpp
    Purpose:

    @author Paulo L.
    @version 1.0 -- 6/30/2019

*/

#include <iostream>
using namespace std;

void logical_operators(int age, bool parental_consent, bool ssn, bool accidents) {
    
    //----WRITE YOUR CODE BELOW----
    
    if ((age >= 18 || (age >= 16 && parental_consent)) && ssn && !accidents)
        cout << "Yes, you can work.";
    
    // Note using age > 15 in the above condition would better match the spec. Thanks Vikram!
    
    //----WRITE YOUR CODE ABOVE----
}