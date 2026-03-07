#include <iostream>
using namespace std;
main(){
        float salary;
        float laptop_price;
        float advance;

        salary = 10000;
        laptop_price = 50000;

        cout<<"Enter you monthly salary:";
        cin>> salary;

        cout<<"Enter your laptop price:";
        cin>> laptop_price;

        advance = salary * 0.5 * 6;
        

        if(advance >= laptop_price){

            cout<<"ali can buy laptop!";
        }
        else
         {

            float months;
            months= laptop_price/ (salary*0.5);

            cout<<"ali can't buy laptop\n";
            cout<<"Months require to buy laptop " << months;
        }
        



}