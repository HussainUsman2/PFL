#include <iostream>
using namespace std;
main(){
    
    int n, num;

    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;

    cout << "Enter numbers count: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter a number: ";
        cin >> num;

        if (num < 200)
        {
            c1++;
        }
        else if (num >= 200 && num <= 399)
        {
            c2++;
        }
        else if (num >= 400 && num <= 599)
        {
            c3++;
        }
        else if (num >= 600 && num <= 799)
        {
            c4++;
        }
        else
        {
            c5++;
        }
    }

    cout << (c1 * 100.0) / n << "%" <<"\n";
    cout << (c2 * 100.0) / n << "%" <<"\n";
    cout << (c3 * 100.0) / n << "%" <<"\n";
    cout << (c4 * 100.0) / n << "%" <<"\n";
    cout << (c5 * 100.0) / n << "%" <<"\n";
}