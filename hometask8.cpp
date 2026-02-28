#include<iostream>
using namespace std;
main(){
cout<<"Enter vegetable price per Kg(in coins):";
float vegetableprice;
cin>>vegetableprice;
cout<<"Enter fruit price per Kg(in coins):";
float fruitprice;
cin>>fruitprice;
cout<<"Enter total Kgs of vegetables:";
int number1;
cin>>number1;
cout<<"Enter total Kgs of fruits:";
int number2;
cin>>number2;
float Totalearningsinrupees=(vegetableprice*number1)+(fruitprice*number2)/1.94;
cout<<"Totalearningsinrupees(Rps):"<<Totalearningsinrupees;







}