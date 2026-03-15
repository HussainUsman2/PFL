#include <iostream>
using namespace std;
main(){

     int holidays, working_days, playtime, difference, hours, minutes;

     cout<<"Enter no of holidays: ";
     cin>> holidays;

     working_days = (365-holidays);
     playtime = (working_days*63) + (holidays * 127);

     
     if(playtime <= 30000){

        difference = 30000 - playtime;
        hours = difference/60;
        minutes= difference % 60;

        cout<<"Tom sleeps well " << "\n";
        cout<<hours <<" hours and " << minutes << " minutes less for play ";
     }
     else{

          difference = playtime - 30000;
          hours = difference/60;
          minutes= difference % 60;

          cout<<"Tom will run away" <<"\n";
          cout<<hours <<" hours and " << minutes << " minutes for play";
     }


}