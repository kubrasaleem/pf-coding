#include<iostream>
using namespace std;
main(){
double money;
int year;
cout<<"Enter money:";
cin>>money;
cout<<"Enter year:";
cin>>year;
int age=18;
double totalspent=0;
int currentyear=1800;
while(currentyear<=year){
    if(currentyear%2==0)
{
    totalspent=totalspent+12000;
}
else{
    totalspent=totalspent+(12000+50*age);
}
age=age+1;
currentyear=currentyear+1;
}
if(money>=totalspent){
    cout<<"Yes!He will live a carefree life and will have"<<money-totalspent<< "dollars left.";
}
else{
    cout<<"He will need"<<totalspent-money<<"dollars to survive.";
}
}