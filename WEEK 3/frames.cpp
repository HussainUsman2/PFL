#include <iostream>
using namespace std;
main()

{


  int minutes;
  cout<<" Enter no of minutes:";
  cin >> minutes;

  int fps;
  cout<<" Enter no of fps:";
  cin>>fps;


  int frames;
  frames = (minutes*60*fps);

  cout<<" Total frames: " << frames;


}