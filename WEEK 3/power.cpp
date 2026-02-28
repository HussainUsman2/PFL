#include <iostream>
using namespace std;
main()

{
  
 int voltage;
 cout<<" Enter volage (in volts):";
 cin>> voltage;
 
 int current;
 cout<<" Enter current (in amperes):";
 cin>> current;

 float power;
 power = voltage*current;


 cout<<" The power is " << power << " watts";



}
 