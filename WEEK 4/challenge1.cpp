#include <iostream>
using namespace std;
main(){

    int integer, even;
    cout<<"Enter The Number:";
    cin>> integer;
    even = integer%2;
    if(even== 0){

        cout<<"The number is even";
    }else{

        cout<<"The number is odd";
    }

}