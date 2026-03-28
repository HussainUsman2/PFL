#include <iostream>
using namespace std;
main(){

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " numbers, one per line:" <<"\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Unique numbers entered: ";

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            cout << arr[i] << " ";
        } else {
            cout << "Already Entered ";
        }
    }

}