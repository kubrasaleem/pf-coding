#include<iostream>
using namespace std;
main(){
cout<<"Enter size of fertilizer bag:";
float fertilizerbag;
cin>>fertilizerbag;
cout<<"Enter cost of bag in dollars($):$";
float dollars;
cin>>dollars;
cout<<"size of area that bag can cover:";
float area;
cin>>area;
float costfertilizerperpound=dollars/fertilizerbag;
cout<<"costfertilizerperpound:$"<<costfertilizerperpound<<endl;
float costfertilizerpersquarefoot=dollars/area;
cout<<"costfertilizerpersquarefoot($):$"<<costfertilizerpersquarefoot;
}