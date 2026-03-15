#include <iostream>
using namespace std;
main (){
int temp1, temp2,temp_difference;

cout<<"Enter Temperature of City 1:";
cin>> temp1;

cout<<"Enter Temperature of City 2:";
cin>> temp2;

temp_difference = temp2-temp1;

if(temp_difference > 10){

    cout<<"Difference is too big!";
}


}