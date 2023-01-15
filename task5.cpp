#include<iostream>
using namepsace std;
float income(float rows, float columns, string screening);
main()
{
int rows, columns;
string screening;
cout<< "Enter number of rows ";
cin>>rows;
cout<< "Enter number of columns ";
cin>>columns;
cout<< "Enter the type of screening ";
cin>>screening;
result= income(rows, columns, screening);
cout<<result;
}
float income(int rows, int columns, string screening)
float payable;
if (screening == "Premiere")
 {
    payable = rows * columns* 12.00;
    return payable;
 }
else if (screening == "Normal")
 {
    payable= rows * columns * 7.5;
    return payable;
 }
 else if( screening == "Ordinary")
 {
    payable = rows * columns * 5.00;
    return payable;
 }
 else
 {
    return payable;
 }



