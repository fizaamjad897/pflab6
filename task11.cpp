#include<iostream>
using namespace std;
int calcnum(int number1, int number2);
main()
 {
    int result, number1, number2;
    cout<< "Enter first number ";
    cin>>number1;
    cout<< "Enter second number ";
    cin>>number2;
    result= calcnum(number1, number2);
    if(result == number1)
     {
        cout<<number1 <<" is greater";
     }
    else
     {
        cout<<number2 <<" is greater";
     }
 }
 int calcnum(int number1, int number2)
  {
    if(number1 > number2)
     {
        return number1;
     }
     else
      {
        return number2;
      }
  }
