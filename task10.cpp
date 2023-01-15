#include<iostream>
using namespace std;
int calcnum(int number);
main()
 {
    int number, result;
    cout<< "Enter a number ";
    cin>>number;
    result= calcnum(number);
    if(result== 0) 
     {
        cout<< "Even";
     }
    else
     {
        cout<< "Odd";
     }
 }
 int calcnum(int number)
  {
    if(number % 2 == 0)
     {
        return 0;
     }
    else
      {
        return 1;
      }
    
  }
