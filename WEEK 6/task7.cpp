#include <iostream>
using namespace std;
main(){

    int n;
    cout << "Enter the number of resistors in the series circuit: ";
    cin >> n;

    double arr[100], sum = 0;
    
    cout << "Enter the resistance values (in ohms), one per line:" <<"\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "The total resistance of the series circuit is: " << sum << " ohms";

}