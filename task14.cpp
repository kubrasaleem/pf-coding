#include<iostream>
using namespace std;
main(){
int amount;
cout<<"Enter your bill:";
cin>>amount;
int discount=(amount*5/100);
if(amount<=5000){
cout<<"Your discounted bill is:"<<amount;
}
if(amount>=5000){
discount=(amount*10/100);}
int finalamount= amount-discount;
cout<<"Your discounted bill is:"<<finalamount;
}