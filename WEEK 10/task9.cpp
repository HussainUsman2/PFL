#include<iostream>
using namespace std;
int Function(int num1);
int main(){

    int num1;
    cout<<"Enter a number: ";
    cin>>num1;

   int result = Function(num1);
    return 0;
}
int Function(int num1){

    int total;
    total = num1 * 5;
    cout<<"The result is: " << total;
    return total;

}
   