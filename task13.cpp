#include<iostream>
using namespace std;
string brandname(string brand, int cost);
main()
 {
    int cost;
    string brand, result;
    cout<< "Enter cost ";
    cin>>cost;
    cout<< "Enter Brand Name ";
    cin>>brand;
    result= brandname(brand, cost);
    cout<<result;
 }
 string brandname(string brand, int cost)
  {
    string bname;
    if(cost < 1500 && brand == "MTJ")
     {
        bname = "Buy the dress";
        return bname;
     }
    else
     {
        bname= "Dont buy the dress";
        return bname;
     }
     
  }
