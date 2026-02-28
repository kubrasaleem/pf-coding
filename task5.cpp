#include<iostream>
using namespace std;
main(){
cout<<"Enter the name";
string name;
cin>>name;
cout<<"Enter matric number(out of 11oo)";
int number1;
cin>>number1;
cout<<"Enter intermediate number(out of 555)";
int number2;
cin>>number2;
cout<<"Enter ecadt marks(out of 400)";
float number3;
cin>>number3;
float percentage=(number1/1100)*17+(number2/1200)*50+(number3/400)*33;
cout<<"percentage"<<percentage;



}