#include <iostream>
using namespace std;
 main(){
    
    double amount;
    int quarters, dimes, nickels, pennies;

    cout << "Enter total amount: ";
    cin >> amount;

    cout << "Enter number of quarters, dimes, nickels, pennies:" <<"\n";
    cin >> quarters >> dimes >> nickels >> pennies;

    double total = (quarters * 0.25) + (dimes * 0.10) +
                   (nickels * 0.05) + (pennies * 0.01);

    if (total == amount) {
        cout << "true";
    } else {
        cout << "false";
    }

}