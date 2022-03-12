/*FileName:2.29.cpp
Author:Ye Tong
Date:Mar 12th ,2022
 */
#include<iostream>
using namespace std;
int main()
{
   cout<<"integer"<<"\tsquare"<<"\tcube"<<endl;
   int i,squ,cub;
   for(i=1;i<=10;i++)
   {
       squ=i*i;
       cub=i*squ;
       cout<<i<<"\t"<<squ<<"\t"<<cub<<endl;
   }
   return 0;
}
