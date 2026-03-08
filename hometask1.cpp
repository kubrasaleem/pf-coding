#include<iostream>
using namespace std;
main(){
string name;
cout<<"Enter country name:";
cin>>name;
int price;
int finalprice;
cout<<"Enter ticket price in dollars:";
cin>>price;
if(name== "Ireland"){
    int discountprice=price*10/100;
    int finalprice=price-discountprice;
    cout<<"Ticket price:"<<price;
}
else{
    int discountprice=price*5/100;
     finalprice=price-discountprice;
    cout<<"Ticket price:"<<discountprice;
}
cout<<"Ticket price:"<<finalprice;
}