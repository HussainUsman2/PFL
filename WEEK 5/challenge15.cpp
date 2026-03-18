#include <iostream>
using namespace std;
main(){
    
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
    {
        num = -num;
    }

    while (num > 0)
    {
        int last = num % 10;
        sum = sum + last;
        num = num / 10;
    }

    cout << "Sum of digits: " << sum;
}