#include<iostream>
using namespace std;
float discount(float price, string month, string day);
main()
 {
    string day, month;
    float price, result;
    cout<< "Enter price ";
    cin>>price;
    cout<< "Enter month ";
    cin>>month;
    cout<< "Enter day ";
    cin>>day;
    result= discount(price, month, day);
    cout<<"Payable amount is " <<result;
 }
 float discount(float price, string month, string day)
  {
    float payable = price;
    if(day == "Sunday" && (month == "March" || month == "October" || month == "August"))
     {
       payable= price - (price * 0.1);
       return payable;
     }
    
    else if(day == "Monday" && (month == "December" || month == "November"))
     {
        payable= price - (price * 0.5);
        return payable;
     }
     
     else 
     {
        return payable;
     }
  }
