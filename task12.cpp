#include<iostream>
using namespace std;
main(){
cout<<"Enter the current world population";
int population1;
cin>>population1;
cout<<"Enter the monthly birth rate(as a percentage)";
int birthrate;
cin>>birthrate;
int population2=population1*(1+(birthrate/100));
cout<<"new population"<<population2; 



}