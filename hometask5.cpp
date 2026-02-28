#include<iostream>
using namespace std;
main(){
cout<<"Enter name of person";
string name;
cin>>name;
cout<<"Enter target loss of weight in Kg";
float targetweight;
cin>>targetweight;
float lossweight=(targetweight*15);
cout<<name<<"needs"<<lossweight<<"days to lose"<<targetweight<<"Kg";



}