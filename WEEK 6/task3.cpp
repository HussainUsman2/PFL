#include <iostream>
using namespace std;
main(){

    char str[100];
    cout << "Enter a String: ";
    cin.getline(str, 100);

    for(int i = 0; str[i] != '\0'; i++)
    {
        int ascii = str[i];   
        if(ascii == 122)      
            str[i] = 97;      
        else if(ascii == 90)  
            str[i] = 65;     
        else
            str[i] = ascii + 1;  
    }

    cout << "Shifted String: " << str;
}