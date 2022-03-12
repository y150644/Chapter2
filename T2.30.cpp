/*FileName:2.30.cpp
Author:Ye Tong
Date:Mar 12th ,2022
 */
#include<iostream>
using namespace std;
int main()
{
   double w,h,BMI;
   cin>>w>>h;
   BMI=w/(h*h);
   if(BMI<18.5) cout<<"Underweight"<<endl;
   else if(BMI>=18.5&&BMI<=24.9)
   cout<<"Normal"<<endl;
   else if(BMI>=25&&BMI<=29.9)
   cout<<"Overweight"<<endl;
   else
   cout<<"Obese"<<endl;
   return 0;
}
