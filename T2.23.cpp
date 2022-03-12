/*FileName:2.23.cpp
Author:Ye Tong
Date:Mar 12th ,2022
 */
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,x,y;
    cin>>a>>b>>c>>d>>e;
    x=a;
    y=a;
    if(b>=x) x=b;
    else if(b<y) y=b;
    if(c>=x) x=c;
    else if(c<y) y=c;
    if(d>=x) x=d;
    else if(d<y) y=d;
    if(e>=x) x=e;
    else if(e<y) y=e;
    cout<<"max="<<x<<"\nmin="<<y<<endl;
    return 0;
}
