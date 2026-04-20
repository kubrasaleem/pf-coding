#include<iostream>
#include<cmath>
using namespace std;
int main(){
int number1,number2;
cout<<"Enter base number:";
cin>>number1;
cout<<"Enter exponent:";
cin>>number2;
cout<<number1 <<" raised to power "<<
number2<<
pow(number1,number2);
return 0;
}