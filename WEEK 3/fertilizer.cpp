#include <iostream>
using namespace std;
main()

{

  float bagsize;
  cout<<" Enter the size of the fertilizer bag in pounds: ";
  cin>>bagsize;


  float bagcost;
  cout<<" Enter the cost of the bag: ";
  cin>>bagcost;


  float area;
  cout<<" Enter the area in sq feet that can be covered by the bag: ";
  cin>>area;


  float fertilizercost;
  fertilizercost =  bagcost/bagsize;


  float costpersqfeet;
  costpersqfeet = bagcost/area;

  cout<<" Cost of fertilizer per pound : $" << fertilizercost <<"\n";
  cout<<" Cost of fertilizer per foot  : $" << costpersqfeet;


}
