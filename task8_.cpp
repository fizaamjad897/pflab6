#include<iostream>
#include<windows.h>
using namespace std;
int calcvoldays(string year, int holidays, int hometown);
main()
 {
    string year;
    int holidays, hometown, result;
    cout<< "Enter year (leap or not) ";
    cin>>year;
    cout<< "Enter number of holidays ";
    cin>>holidays;
    cout<< "Enter the count of weekends in hometown ";
    cin>>hometown;
    result = calcvoldays(year, holidays, hometown);
    cout<<result;
 }
 int calcvoldays(string year, int holidays, int hometown)
   {
    int holidaysnum, sofiaweekend, total, sofiavol;
    sofiaweekend= 48 - hometown;
    sofiavol = sofiaweekend * 0.75;
    holidaysnum = holidays * 0.67;
    total = sofiavol + holidaysnum + hometown;
    if(year == "normal")
     {
      return total;
     }
    if(year == "leap")
     {
       int totalleap;
       totalleap= (total * 0.15) + total;
       return totalleap;
     }
     return 0;
   }
