#include<iostream>
using namespace std;
int main(){
    cout<<"Finding the cost of ticket according to the age ";
 int t;
    cout<<"enter your age for discount";
    cin>>t;
    if(t < 16){
        cout<<"yes you are eligible for discount"<<endl;
        cout<<t<<"%"<<" is discount you got";
    }
    else cout<<"no discount is available for you ";
    cout<<endl;
}