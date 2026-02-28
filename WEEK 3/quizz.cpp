#include <iostream>
using namespace std;
main()

{


   int per_month_salary;
   cout<<" Enter Your Month Income :";
   cin>>per_month_salary;

   int per_day_salary;
   cout<<" Enter Your Salary IN $ Per day :";
   cin>>per_day_salary;

   float salary_per_year;
   salary_per_year = (per_month_salary*12);

   float bonus;
   bonus = (salary_per_year*0.025);

   float tax;
   tax = (bonus*0.25);


   float dollar;
   cout<<" Enter Your Exchange Rate In $: ";
   cin>>dollar;

   float net_salary_after_all_deduction_and_bonus;
   net_salary_after_all_deduction_and_bonus = (tax*dollar);
   cout<<" Your yearly income after all deduction in $ is " << dollar;






}