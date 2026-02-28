#include<iostream>
using namespace std;
main(){
cout<<"Name of movie:";
string Name;
cin>>Name;
cout<<"Enter price of an adult ticket($):$";
int price1;
cin>>price1;
cout<<"Enter price of a child ticket($):$";
int price2;
cin>>price2;
cout<<"Enter number of adult tickets sold:";
int number1;
cin>>number1;
cout<<"Enter number of children's tickets sold:";
int number2;
cin>>number2;
cout<<"Enter percentage of total money to donate:";
int percentage;
cin>>percentage;
int Totalamount=(price1*number1)+(price2*number2);
int Donation=Totalamount*percentage/100;
int Remainingamount=Totalamount-Donation;
cout<<"------------------------------"<<endl;
cout<<"Name:"<<Name<<endl;
cout<<"Totalamount:($)"<<Totalamount<<endl;
cout<<"Donation:($)"<<Donation<<endl;
cout<<"Remainingamount:($)"<<Remainingamount<<endl;







}