#include <iostream>
using namespace std;
main(){
    
    int n;

    cout << "Enter the length of the Fibonacci series: ";
    cin >> n;

    int first = 0, second = 1, next;

    for (int i = 1; i <= n; i++)
    {
        cout << first;

        if (i < n)
        {
            cout << ", ";
        }

        next = first + second;
        first = second;
        second = next;
    }
}