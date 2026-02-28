#include<iostream>
using namespace std;
main(){
cout<<"Enter imposter count";
int impostercount;
cin>>impostercount;
cout<<"Enter player count";
float playercount;
cin>>playercount;
float chanceimposter=100*(impostercount/playercount);
cout<<"chanceimposter"<<chanceimposter<<"%";



}