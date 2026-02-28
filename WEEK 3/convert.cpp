#include <iostream>
using namespace std;
main()
{

  int mb;
  cout<<"Enter size in mb:";
  cin>>mb;

  float kb;
  kb = mb*1024;

  float bytes;
  bytes = kb*1024;

  float bits;
  bits = bytes*8;

  
  cout<<mb <<" mb equals to "<<bits << " bits";








}
  