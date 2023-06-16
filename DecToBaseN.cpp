//
//  DecToBaseN.cpp
//  M_Kenia_RA6
//
//  Created by Meer Kenia on 3/1/23.
//

#include <iostream>
#include <string>

using namespace std;

string DecToBaseN(int num, int base) {
    
    // invalid case
    if (base < 2 || (base > 10 && base != 16)) {
        cout << "Invalid Base: " << base << endl;
        return "";
    }
    
    // base case
    if (num == 0) {
        return "";
    }
    
    // recursive
    else {
        int remainder = num % base;
        int quotient = num / base;
        char digit;
        string answer = "";
        if (remainder < 10) {
            digit = remainder + '0';
        }
        else {
            digit = remainder - 10 + 'A';
        }

        answer = DecToBaseN(quotient, base) + digit;

        return answer;
    }
    
}
