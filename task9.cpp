#include<iostream>
using namespace std;
float checkcost(string product, string city, float quantity);
main()
 {
    string product, city;
    float quantity, cost;
    cout<< "Enter product name ";
    cin>>product;
    cout<< "Enter city ";
    cin>>city;
    cout<< "Enter quantity ";
    cin>>quantity;
    cost = checkcost(product, city, quantity);
    cout<<cost;
 }
 float checkcost(string product, string city, float quantity)
  {
    if (product == "Coffee")
     { 
        float cost;
        if (city == "Sofia")
         {
            cost= quantity * 0.50;
            return cost;
         }
        if(city == "Plodiv")
         {
            cost= quantity * 0.40;
            return cost;
         }
        if(city == "Varna")
         {
            cost = quantity * 0.45;
            return cost;
         }
     }
     if (product == "Water")
     { 
        float cost;
        if (city == "Sofia")
         {
            cost= quantity * 0.80;
            return cost;
         }
        if(city == "Plodiv")
         {
            cost= quantity * 0.70;
            return cost;
         }
        if(city == "Varna")
         {
            cost = quantity * 0.70;
            return cost;
         }
     }
     if (product == "Beer")
     { 
        float cost;
        if (city == "Sofia")
         {
            cost= quantity * 1.20;
            return cost;
         }
        if(city == "Plodiv")
         {
            cost= quantity * 1.15;
            return cost;
         }
        if(city == "Varna")
         {
            cost = quantity * 1.10;
            return cost;
         }
     }
     if (product == "Sweets")
     { 
        float cost;
        if (city == "Sofia")
         {
            cost= quantity * 1.45;
            return cost;
         }
        if(city == "Plodiv")
         {
            cost= quantity * 1.30;
            return cost;
         }
        if(city == "Varna")
         {
            cost = quantity * 1.35;
            return cost;
         }
     }
     if (product == "Peanuts")
     { 
        float cost;
        if (city == "Sofia")
         {
            cost= quantity * 1.60;
            return cost;
         }
        if(city == "Plodiv")
         {
            cost= quantity * 1.50;
            return cost;
         }
        if(city == "Varna")
         {
            cost = quantity * 1.55;
            return cost;
         }
     }
     return 0;
     }
  
