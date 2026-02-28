#include <iostream>
using namespace std;
main()

{


   string movie;
   cout<<" Enter Movie Name:";
   cin>>movie;

   int adult_ticket;
   cout<<" Enter the Adult Ticket Price:";
   cin>>adult_ticket;

   
   int child_ticket;
   cout<<" Enter the Child Ticket Price:";
   cin>>child_ticket;



   int sold_adult_ticket;
   cout<<" Enter the number of adult tickets sold:";
   cin>>sold_adult_ticket;


   int sold_child_ticket;
   cout<<" Enter the number of child tickets sold:";
   cin>>sold_child_ticket;


   float percent_for_charity;
   cout<<" Enter the percentage of amount to be donated to charity:";
   cin>>percent_for_charity;


   float total_amount;
   total_amount = (adult_ticket*sold_adult_ticket) + (child_ticket*sold_child_ticket);

   
   float donation;
   donation = (total_amount*percent_for_charity) / 100;
   

   float remaining;
   remaining = total_amount-donation;

   cout<<" Total remaining amount after donation is : $" << remaining;



}

   


   


   