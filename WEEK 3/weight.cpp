#include <iostream>
using namespace std;
main()

{

  string name;
  cout<<" Enter your name: ";
  cin>>name;


  float weight;
  cout<<" Enter the weight loss target in kg: ";
  cin>>weight;

  float days;
  days = weight*15;
  cout<< name <<" will need " << days <<" days to lose " << weight << " kg of weight by   following the doctor's suggestions";


}

  