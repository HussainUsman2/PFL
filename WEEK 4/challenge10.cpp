#include<iostream>
using namespace std;
main(){

    string country;
    float ticket_price;
    float discount_price;
    float final_price;

    cout<<" Enter country name:";
    cin>> country;

    cout<<"Enter ticket price:";
    cin>> ticket_price;

    if(country =="ireland"){

       discount_price = ticket_price *0.10;
    }
    else{

        discount_price = ticket_price *0.05;
    }

    final_price = ticket_price-discount_price;

    cout<<"Your discounted price for ticket is "<< final_price;

}
