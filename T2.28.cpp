/*FileName:2.28.cpp
Author:Ye Tong
Date:Mar 12th ,2022
 */
#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a,b,c,d,e;
   a=n/10000;
   e=n%10;
   b=n%10000/1000;
   c=n%1000/100;
   d=n%100/10;
   cout<<a<<"   "<<b<<"   "<<c<<"   "<<d<<"   "<<e;
   return 0;
}
