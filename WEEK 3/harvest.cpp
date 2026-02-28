#include <iostream>
using namespace std;
main()

{

   float vegprice;
   cout<<" Enter vegetable price per kg (in coins):";
   cin>>vegprice;



   float fruitprice;
   cout<<" Enter fruit price per kg (in coins):";
   cin>>fruitprice;


   
   int vegkg;
   cout<<" Enter total kilograms of vgegtable:";
   cin>>vegkg;

   
   int fruitkg;
   cout<<" Enter total kilograms of fruits:";
   cin>>fruitkg;


   float total;
   total = (vegprice*vegkg)+(fruitprice*fruitkg);

   
   float totalearning;
   totalearning = (total/1.94);


   cout<<" Totla Earning In Pkr is :"<<totalearning;



}

   
   


   


   



