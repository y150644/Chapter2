/*FileName:2.19.cpp
Author:Ye Tong
Date:Mar 12th ,2022
 */
#include<iostream>
using namespace std;
int main()
{
   cout<<"Input three different numbers:";
   int a,b,c;
   cin>>a>>b>>c;
   int x,y;
   x=b;
   y=b;
   if(a>=x) x=a;
   else y=a;
   if(c>=y) x=c;
   else y=c;
   cout<<"Sum is "<<a+b+c<<endl;
   cout<<"Average is "<<(a+b+c)/3<<endl;
   cout<<"product is "<<a*b*c<<endl;
   cout<<"Smallest is "<<y<<endl;
   cout<<"Largest is "<<x<<endl;
   return 0;
}
