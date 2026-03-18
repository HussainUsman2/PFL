#include <iostream>
using namespace std;
main(){

    int number, digit, count = 0;

    cout<< "Enter number: ";
    cin>> number;

    cout<< "Enter digit: ";
    cin>> digit;

    for (int x = number; x > 0; x = x / 10)
    {
        if (x % 10 == digit)
        {
            count++;
        }
    }
    cout<< "Frequency of the digit is: " << count;
}