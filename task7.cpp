#include<iostream>
using namespace std;
float travelbudget(float budget, float numofpeople);
float budgetleft(float travel, string category, float numofpeople);
main()
 {
    float budget, travel, actualbudget;
    float numofpeople, result;
    string category;
    cout<< "Enter the budget you have ";
    cin>>budget;
    cout<< "Enter the category ";
    cin>>category;
    cout<< "Enter the number of people that are going ";
    cin>>numofpeople;
    travel= travelbudget(budget, numofpeople);
    actualbudget= budgetleft(travel, category, numofpeople);
    if (actualbudget  <= budget)
     {
        float amount;
        amount= budget - actualbudget;
        cout << "Yes! You have " <<amount << "  QTRS left";
     }
    else
     {
        float amount;
        amount= actualbudget - budget;
        cout<< "Not enough money you need " <<amount <<" QTRs";
     }
 }
 float travelbudget(float budget, float numofpeople)
  {
     float money;
     if(numofpeople>=1 && numofpeople<=4)
      {
        money= budget * 0.75;
        return money;
        
      }
      else if(numofpeople>=5 && numofpeople<=9)
      {
        money= budget * 0.60;
        return money;
      }
      else if(numofpeople>=10 && numofpeople<=24)
      {
        money= budget * 0.50;
        return money;
      }
      else if(numofpeople>=25 && numofpeople<=49)
      {
        money= budget * 0.40;
        return money;
      }
      else
       {
        money = budget * 0.25;
        return money;
       }
  }
  float budgetleft(float travel, string category, float numofpeople)
  {
   if (category == "VIP")
     {
        float budget_category;
        budget_category= travel + (499.99 * numofpeople);
        return budget_category;
     }
    if(category == "Normal")
     {
        float budget_category;
        budget_category= travel + (249.99 * numofpeople);
        return budget_category;
    }
    return 0;
  }