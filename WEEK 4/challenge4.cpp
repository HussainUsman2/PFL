#include <iostream>
using namespace std;
main(){

    string my_password, user_password;
    my_password = "Usman@123!";
    cout<<"Enter the password:";
    cin>> user_password;

    if(my_password==user_password){

        cout<<" Your password is correct";
        
    }else{

        cout<<" Your password is wrong";
    }
}