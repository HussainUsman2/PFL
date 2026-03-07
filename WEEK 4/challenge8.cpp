#include <iostream>
using namespace std;
main(){

    char character;
    cout<<"Enter any character in lower case:";
    cin>> character;

    if(character =='a'|| character == 'e'|| character == 'i'|| character=='o'|| character=='u') {
        cout<<"It's a vowel";
    }

    else
    {
        if (character >='0'&& character <='9')
        {
            cout<<"It's a number";
        }
    
        else{

            cout<<"It's a consonant";
        }
    }

}