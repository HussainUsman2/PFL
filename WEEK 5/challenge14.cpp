#include <iostream>
using namespace std;
main(){
    
    int num, digit, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter the digit to check: ";
    cin >> digit;

    if (num < 0)
    {
        num = -num;
    }

    while (num > 0)
    {
        int last = num % 10;

        if (last == digit)
        {
            count++;
        }

        num = num / 10;
    }

    cout << "Frequency: " << count;
}