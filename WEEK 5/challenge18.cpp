#include <iostream>
using namespace std;
main(){
    
    int age, price, toyPrice;

    cout << "Enter Lilly's age: ";
    cin >> age;

    cout << "Enter the price of the washing machine: ";
    cin >> price;

    cout << "Enter the unit price of each toy: ";
    cin >> toyPrice;

    int money = 0;
    int toys = 0;
    int giftMoney = 10;

    for (int i = 1; i <= age; i++)
    {
        if (i % 2 == 0)
        {
            money = money + giftMoney - 1;
            giftMoney = giftMoney + 10;
        }
        else
        {
            toys++;
        }
    }

    money = money + (toys * toyPrice);

    if (money >= price)
    {
        cout << "Yes!" <<"\n";
        cout << money - price;
    }
    else
    {
        cout << "No!" <<"\n";
        cout << price - money;
    }
}