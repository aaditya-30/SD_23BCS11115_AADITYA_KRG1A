#include<bits/stdc++.h>
using namespace std;
// Single Responsibility Principle for Banking System
void deposit(double amt, double init)
{
    init+=amt;
    cout<<"Current balance is: "<<init<<endl;
}
void withdraw(double amt, double init)
{
    if(amt>init)
    {
        cout<<"Paisa nhi h"<<endl;
    }
    else{
        init-=amt;
        cout<<"Current balance is: "<<init<<endl;
    }
}

int main()
{
    int userid;
    cin>>userid;

    int init;
    cin>>init;

    int amt;
    cout<<"Enter the amount: ";
    cin>>amt;

    int valid;
    
    cout<<"Enter these for the operation you want to perform"<<endl;
    cout<<"1 for deposit"<<endl<<"0 for withdraw"<<endl;
    cin>>valid;

    if(valid)
    {
        deposit(amt, init);
    }
    else{
        withdraw(amt, init);
    }
}