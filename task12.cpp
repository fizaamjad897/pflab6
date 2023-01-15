#include<iostream>
using namespace std;
int calcnum(int number1, int number2, int number3);
main()
 {
    int result, number1, number2, number3;
    cout<< "Enter first number ";
    cin>>number1;
    cout<< "Enter second number ";
    cin>>number2;
    cout<< "Enter third number ";
    cin>>number3;
    result= calcnum(number1, number2, number3);
    if(result == number1)
     {
        cout<<number1 <<" is greatest";
     }
    else if(result == number2)
     {
        cout<<number2 <<" is greatest";
     }
    else
     {
        cout<<number3 <<" is greatest";
     }
 }
 int calcnum(int number1, int number2, int number3)
  {
    if(number1 > number2 && number1 > number3)
     {
        return number1;
     }
    else if(number2 > number1 && number2 > number3)
      {
        return number2;
      }
    else
     {
        return number3;
     }
  }
