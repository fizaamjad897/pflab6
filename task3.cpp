#include<iostream>
using namespace std;
string calctitle(float age, char gender);
main()
 {
    float age;
    char gender;
    string result;
    cout<< "Enter your age ";
    cin>>age;
    cout<< "Enter your gender 'f' for female and 'm' for male ";
    cin>>gender;
    result = calctitle(age, gender);
    cout<<result;
 }
 string calctitle(float age, char gender)
  {
    string title;
    if(gender = 'm' && age >= 16)
     {
        title= "Mr.";
     }
     else if(gender = 'm' && age < 16)
     {
        title= "Master";
     }
     else if(gender = 'f' && age >= 16)
     {
        title= "Ms.";
     }
     else if(gender = 'f' && age < 16)
     {
        title= "Mr";
     }
     else
      {
           title= "Rather not to say";
      }
      return title;
    
  }
