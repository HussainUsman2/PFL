#include <iostream>
using namespace std;
main()

{


  int imposters;
  cout<<" Enter no of imposters: ";
  cin>> imposters;

  int players;
  cout<<" Enter no of players:";
  cin>> players;

  float chance;
  chance = 100*(imposters/players);

  cout<<"Chance =" << chance << "%";


}

  