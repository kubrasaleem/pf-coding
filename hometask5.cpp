#include<iostream>
using namespace std;
main(){
int num;
int workingdays=63;
int holidays=127;
int totaldays=365;
int norm=30000;
cout<<"Holidays:";
cin>>num;
 workingdays=totaldays-num;
int totalplaytime=workingdays*63+num*127;
if(totalplaytime<=norm){
    int diff=norm-totalplaytime;
    int hours=diff/60;
    int minutes=diff%60;
    cout<<"Tom sleeps well"<<endl;
    cout<<"The difference from norm is"<< hours << " hours and" << minutes<<" minutes less for play."<<endl;
}
else{
int diff=totalplaytime-norm;
int hours=diff/60;
int minutes=diff%60;
cout<<"Tom will run away"<<endl;
cout<<"The difference from the norm is"<< hours << " hours and" 
<< minutes<< " minutes for play."<<endl;
}
}