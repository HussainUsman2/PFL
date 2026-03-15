#include <iostream>
using namespace std;
main (){

    int red_rose, white_rose, tulips;

    cout<<"Enter no of red roses: ";
    cin>>red_rose;

    cout<<"Enter no of white roses: ";
    cin>>white_rose;

    cout<<"Enter no of tulips: ";
    cin>>tulips;

    float red_price, white_price, tulip_price;

    red_price = 2, white_price = 4.10, tulip_price = 2.10;

    float total_bill;

    total_bill = (red_price*red_rose + white_price*white_rose + tulip_price*tulips);

    if(total_bill > 200){

        float discount, discount_bill;

        discount = total_bill *0.20;
        discount_bill = total_bill - discount;

        cout<<"Original Price: "   << total_bill <<"\n";
        cout<<"Discounted Price: "  << discount_bill;

    }
    else{

        cout<<"Your total bill is: "  << total_bill;
    }
}