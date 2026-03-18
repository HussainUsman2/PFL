#include <iostream>
using namespace std;
main(){

    int first_number, second_number, gcd = 1, lcm;
    
    cout<< "Enter first number:";
    cin>> first_number;

    cout<< "Enter second number:";
    cin>> second_number;

    for (int i = 1; i <= first_number && i <= second_number; i++)
    {
        if (first_number % i == 0 && second_number % i == 0)
        {
            gcd = i;
        }
    }

    lcm = (first_number * second_number) / gcd;

    cout<< "GCD of " << first_number << " and " << second_number << " is: " << gcd <<"\n";
    cout<< "LCM of " << first_number << " and " << second_number << " is: " << lcm <<"\n";
}