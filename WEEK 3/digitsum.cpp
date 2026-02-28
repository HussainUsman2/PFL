#include <iostream>
using namespace std;
main()

{


   int number;
   cout<<" Enter a 4 digit number: ";
   cin>>number;

   int digit_1;
   digit_1 = number % 10;
   number = number/10; 

   int digit_2;
   digit_2 = number % 10;
   number = number/10; 


   int digit_3;
   digit_3 = number % 10;
   number = number/10; 


   int digit_4;
   digit_4 = number % 10;
   number = number/10; 


   int sum;
   sum = digit_1+digit_2+digit_3+digit_4;

   cout<<" Sum of the individual digits:" <<sum;


}

   



  