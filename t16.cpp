#include<iostream>
using namespace std;
main (){
    int coins[4];
    double values[4]= { 0.25,0.10,0.05,0.01};
    double total=0,amount;
    cout<<"Enter quaters:";
    cin>>coins[0];
    cout<<"Enter dimes:";
    cin>>coins[1];
cout<<"Enter nickels:";
    cin>>coins[2];
    cout<<"Enter pennies:";
    cin>>coins[3];
    cout<<"Enter total amont:$";
    cin>>amount;
    for(int i=0;i<4;i++){
        total+=coins[i]*values[i];
    }
    if(total>=amount)
    cout<<"Can you pay the amount? Yes"<<endl;
    else{
        cout<<"Can you pay the amount? No"<<endl;
    }

    }