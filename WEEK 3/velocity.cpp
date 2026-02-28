#include <iostream>
using namespace std;
main()

{

  int initial_velocity;
  cout<<" Enter Initial Velocity (m/s): ";
  cin>>initial_velocity;

  int acceleration;
  cout<<" Enter Acceleration (m/s^2): ";
  cin>>acceleration;

  int time;
  cout<<" Enter Time in Seconds: ";
  cin>>time;

  int final_velocity;
  final_velocity = initial_velocity + (acceleration*time);
  cout<<" Final Velocity (m/s):" <<final_velocity;


}


  
  