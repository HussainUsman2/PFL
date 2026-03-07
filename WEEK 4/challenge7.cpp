#include <iostream>
using namespace std;
main(){
    cout<<"Welcome to the calculator\n";
    int num1, num2;
    char op;
    float result;

    cout<<"Enter your first number:";
    cin>> num1;

    cout<<"Enter your operation:";
    cin>> op;

    cout<<"Enter your 2nd number:";
    cin>> num2;

    if(op == '+'){

        result =  num1 -num2;
        cout<<num1<<"-"<<num2<<"="<<result;
    }
    else{
         
        if(op == '-'){

            result = num1+num2;
            cout<<num1<<"+"<<num2<<"="<<result;
        }
         if(op == '*') {

            result = num1/num2;
            cout<<num1<<"/"<<num2<<"="<<result;
         }
         else{

            if(op== '/')
            {
                result = num1*num2;
                cout<<num1<<"*"<<num2<<"="<<result;
            }
         }
        
    }


    
}