#include<iostream>
using namespace std;
int main(){
    cout<<"Finding the month by using the number ";
 int n;
    cout<<"enter a number in between 1 to 12";
    cin>>n;
    if(n == 1)cout<<"january";
    else if(n == 2)cout<<"feburary";
    else if(n == 3)cout<<"march";
    else if(n == 4)cout<<"april";
    else if(n == 5)cout<<"may";
    else if(n == 6)cout<<"june";
    else if(n == 7)cout<<"july";
    else if(n == 8)cout<<"august";
    else if(n == 9)cout<<"september";
    else if(n == 10)cout<<"ocotber";
    else if(n == 11)cout<<"november";
    else if(n == 12)cout<<"december";
    else cout<<"wrong input";
    cout<<endl;
}