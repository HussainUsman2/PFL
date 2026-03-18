#include <iostream>
using namespace std;
main(){
    
    int choice;
    string bookName = "";

    cout << "--- Library System ---" <<"\n";
    cout << "1. Add Book" <<"\n";
    cout << "2. View Book" <<"\n";
    cout << "3. Borrow Book" <<"\n";
    cout << "4. Issue Book" <<"\n";
    cout << "5. Exit" <<"\n";

    cout << "Enter your choice (1-5): ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter book name: ";
        cin >> bookName;

        cout << "You added a book: " << bookName <<"\n";
    }
    else if (choice == 2)
    {
        cout << "You selected: View Book." <<"\n";
    }
    else if (choice == 3)
    {
        cout << "You selected: Borrow Book." <<"\n";
    }
    else if (choice == 4)
    {
        cout << "You selected: Issue Book." <<"\n";
    }
    else if (choice == 5)
    {
        cout << "Exiting Library System. Goodbye!" <<"\n";
    }
    else
    {
        cout << "Invalid choice" <<"\n";
    }
}