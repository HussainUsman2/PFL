#include <iostream>
using namespace std;
main()

{

   string name;
   cout<<"Enter the student name:";
   cin>> name;

   int matric;
   cout<<" Enter your matric marks (out of 1100):";
   cin>> matric;

   int inter;
   cout<<" Enter your 1st year marks (out of 560):";
   cin>> inter;
  

   int ecat;
   cout<<" Enter your ecat marks (out of 400):";
   cin>> ecat;


   float matricagg;
   matricagg = (matric/1100) * 10;
  
   float interagg;
   interagg = (inter/1100) * 40;

   
   float ecatagg;
   ecatagg = (ecat/400) * 50;

   
   float aggregate;
   aggregate = matricagg + interagg + ecatagg;


   cout<<" Aggregate score for "<<name<<" is "<<aggregate<<"%";




   }