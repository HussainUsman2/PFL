#include <iostream>
using namespace std;
main(){
    
    int money, year;

    cout << "Enter Money: ";
    cin >> money;

    cout << "Enter Year: ";
    cin >> year;

    int total = 0;
    int age = 18;

    for (int i = 1800; i <= year; i++)
    {
        if (i % 2 == 0)
        {
            total = total + 12000;
        }
        else
        {
            total = total + 12000 + (50 * age);
        }

        age++;
    }

    if (money >= total)
    {
        cout << "Yes! He will live a carefree life and will have " << money - total << " dollars left.";
    }
    else
    {
        cout << "He will need " << total - money << " dollars to survive.";
    }
}