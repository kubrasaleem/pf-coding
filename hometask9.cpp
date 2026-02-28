#include<iostream>
using namespace std;
main(){
cout<<"Enter a 4-Digit number:";
int Number;
cin>>Number;
int digit1=(Number/1000);
int digit2=(Number/100)%10;
int digit3=(Number/10)%10;
int digit4=Number%10;
int sum=digit1+digit2+digit3+digit4;
cout<<"Sum of digits="<<sum<<endl;



}