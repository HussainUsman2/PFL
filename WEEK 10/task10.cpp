#include<iostream>
using namespace std;
int main(){

    char letter;
    cout<<" Enter a character: ";
    cin>>letter;

return 0;

}
int checkAlphabetCase(char letter){

    if (letter >= 'A' && letter <= 'Z') {

        cout << "The character is an uppercase letter." <<"\n";

    } else if (letter >= 'a' && letter <= 'z') {
        cout << "The character is a lowercase letter." <<"\n";

    } else {
        cout << "The character is not an alphabet letter." <<"\n";
    }
    return 0;
}