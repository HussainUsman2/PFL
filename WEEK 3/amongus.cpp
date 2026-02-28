#include <iostream>
using namespace std;
main()

{

   int imposters;
   cout<<" Enter no of imposters: ";
   cin>>imposters;


   int count;
   cout<<" Enter player counts: ";
   cin>>count;


   float chance;
   chance = (100*imposters/count);
   cout<<" Chance of being an imposter is :" << chance << "%";
  
} 