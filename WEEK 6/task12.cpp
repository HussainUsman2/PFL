#include <iostream>
using namespace std;
main(){
    
    int arr[100], n;
    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool special = true;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0 && arr[i] % 2 != 0)
            special = false;

        if (i % 2 == 1 && arr[i] % 2 == 0)
            special = false;
    }

    if (special)
        cout << "Array is special";
    else
        cout << "Array is not special";
}