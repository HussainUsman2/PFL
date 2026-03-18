#include <iostream>
using namespace std;
main(){

    int input_pin, correct_pin = 1234, balance = 1000, amount, user_choice;
    
    for (int attempt = 1; attempt <= 3; attempt++)
    {
        cout<< "Enter ATM PIN: ";
        cin>> input_pin;

        if (input_pin == correct_pin)
        {
            cout<< "Login Successful" <<"\n";
            break;
        }
        else
        {
            cout << "Wrong PIN" <<"\n";
        }

        if (attempt == 3)
        {
            cout << "Too many attempts. Card Blocked." <<"\n";
        }
    }

    for (int menuloop = 1; menuloop <= 5; menuloop++)
    {
        cout<< "\n";
        cout<< "----- ATM MENU -----" <<"\n";
        cout<< "1. Check Balance" <<"\n";
        cout<< "2. Deposit Money" <<"\n";
        cout<< "3. Withdraw Money" <<"\n";
        cout<< "4. Exit" << "\n";

        cout<< "Enter Choice: ";
        cin>> user_choice;

        if (user_choice == 1)
        {
            cout<< "Current Balance: " << balance <<"\n";
        }
        else if (user_choice == 2)
        {
            cout<< "Enter amount to deposit: ";
            cin>> amount;

            balance = balance + amount;

            cout<< "Money Deposited Successfully" <<"\n";
        }
        else if (user_choice == 3)
        {
            cout<< "Enter amount to withdraw: ";
            cin>> amount;

            if (amount <= balance)
            {
                balance = balance - amount;
                cout<< "Please collect your cash" <<"\n";
            }
            else
            {
                cout<< "Insufficient Balance" <<"\n";
            }
        }
        else if (user_choice == 4)
        {
            cout<< "Thank you for using ATM" <<"\n";
            break;
        }
        else
        {
            cout<< "Invalid Choice" <<"\n";
        }
    }
}