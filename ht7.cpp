#include<iostream>
using namespace std;
main(){
    int totalproducts[4];
    int n;
    cout<<"Enter number of products: ";
    cin>>n;
    string productNames[n];
    double prices[n];
    int quantities[n];
    double values[n];
    for(int i=0; i<n; i++){
        cout<<"Enter name of product "<<i+1<<" : ";
        cin>>productNames[i];
        cout<<"Enter price of "<< productNames[i]<<" :$ ";
        cin>>prices[i];
        cout<<"Enter quantity of "<<productNames[i]<<" : ";
        cin>>quantities[i];
        values[i]=prices[i]*quantities[i];
    }
    cout<<endl;
    cout<<"Inventory product"<<endl;
    cout<<"--------------------"<<endl;
for(int i=0; i<n; i++){
    cout<<productNames[i]<<": "<<"$ "<<prices[i] <<","<<quantities[i]<<" in stock , "<<" Total value:$ "<<values[i]<<endl;

    }
}
    