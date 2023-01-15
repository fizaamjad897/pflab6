#include<iostream>
using namespace std;
bool isequal(int number1, int number2, int number3);
main()
 {
    int number1, number2, number3;
    bool result;
    cout<< "Enter 1st number ";
    cin>>number1;
    cout<< "Enter 2nd number ";
    cin>>number2;
    cout<< "Enter 3rd number ";
    cin>>number3;
    result =isequal(number1, number2, number3);
    if(result == true)
     {
        cout<< "Yes";
     }
    else 
     {
        cout<< "No";
     }
 }
 bool isequal(int number1, int number2, int number3)
  {
    if(number1 == number2 && number1 == number3)
     {
        return true;
     }
    else if(number2 == number1 && number2 == number3)
     {
        return true;
     }
    else if(number3 == number1 && number3 == number2)
     {
        return true;
     }
    else 
     {
        return false;
     }
  }
