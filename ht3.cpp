#include<iostream>
#include<string>
using namespace std;
double volume(double l,double h,double w,string unit){
 double volume=(1.0/3.0)*l*h*w;
 double volume1;
if(unit=="milimetres"){
volume1=volume*1000000000.0;
}
else if(unit=="centimetres"){
    volume1=volume*1000000.0;
}
else if(unit=="metres"){
   volume1=volume; 
}
else if(unit=="kilometres"){
   volume1=volume*0.000000001; 
}
else {
    cout<<"Invalid units.Enter milimetres,centimetres,metres or kilometres.";
}
 return volume1; 
}
int main(){
    double l, h,w;
    string unit;
    cout<<"Enter length,width and height (in metres):";
    cin>>l;
    cin>>w;
    cin>>h;
    cout<<"Enter output unit(milimetres,centimetres,metres or kilometres):";
    cin>>unit;
    double result=volume(l,h,w,unit);
    cout<<result << "cubic "<< unit;;
    return 0;
}