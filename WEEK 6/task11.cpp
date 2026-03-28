#include <iostream>
using namespace std;
main(){
    
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        char c = tolower(str[i]);

        if (c!='a' && c!='e' && c!='i' && c!='o' && c!='u') {
            cout << str[i];
        }
    }

}