#include<iostream>
using namespace std;
float lowestprice(float kms, string period);
main()
 {
    float kms;
    string period;
    cout<< "Enter number of kilometres ";
    cin>>kms;
    cout<< "Enter period in which you are travelling ";
    cin>>period;
    float result;
    result = lowestprice(kms, period);
    cout<<result;

 }
 float lowestprice(float kms, string period)
  {
    float price;
    if(kms<20 && period == "Day")
     {
        float taxi;
        taxi= (kms * 0.79) + 0.70;
        price = taxi;
        return price;
     }
    else if(kms<20 && period == "Night" )
      {
        float taxi;
        taxi = (kms * 0.90) + 0.70;
        price = taxi;
        return price;
      }
      
    else if(kms > 100 && (period == "Day" || period == "Night"))
     {
        float train;
        train= kms * 0.06 ;
        price = train;
        return price;
     }
      
      else 
       {
        float bus;
        bus= kms * 0.09;
        price = bus;
        return price;
       }
       return 0;
  }

