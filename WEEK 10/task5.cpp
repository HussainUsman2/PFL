#include<iostream>
#include <cmath>
using namespace std;

int main(){

    int number1, number2;

    cout<<"Enter first number: ";
    cin>>number1;

    cout<<"Enter second number: ";
    cin>>number2;
    
    cout<<"Minimum Number: " << min(number1, number2);
    return 0;
}