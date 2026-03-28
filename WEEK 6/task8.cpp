#include <iostream>
using namespace std;
main(){

    int n1, n2;
    cout << "Enter elements for first array (must be even): ";
    cin >> n1;

    int arr1[100], arr2[100], result[200];
    cout << "Enter first array elements:" <<"\n";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter number of elements for second array: ";
    cin >> n2;

    cout << "Enter second array elements:" <<"\n";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int mid = n1 / 2;
    for (int i = 0; i < mid; i++) {
        result[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++) {
        result[mid + i] = arr2[i];
    }

    for (int i = mid; i < n1; i++) {
        result[n2 + i] = arr1[i];
    }

    cout << "Resulting array: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << result[i] << " ";
    }

}