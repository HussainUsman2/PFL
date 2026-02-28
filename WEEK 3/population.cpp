#include <iostream>
using namespace std;
main()

{

  
   int wpopulation;
   cout<<" Enter the current world population:";
   cin>>wpopulation;

   

   int birth;
   cout<<" Enter the monthly birth rate (number of births per month):";
   cin>>birth;

   int population;
   population = wpopulation + (birth*360);

   cout<<" Population in three decades will be: " << population;


}
   
