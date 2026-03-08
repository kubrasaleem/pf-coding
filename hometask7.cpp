#include<iostream>
using namespace std;
main(){
    string name;
    cout<<"Name:";
    cin>>name;
float number1;
    cout<<"Number:";
    cin>>number1;
    float area;
    if(name=="square"){
        int area=number1*number1;
        cout<<"Area:"<<area;
    }
 else  if(name=="rectangle"){
float number2;
cout<<"Number1:";
cin>>number2;
 area=number1*number2;
cout<<"Area:"<<area;
    }
   else if (name=="circle"){
         area=3.14159*(number1*number1);
        cout<<"Area:"<<area;
    }
   else if(name=="triangle"){
        float number2;
        cout<<"Number2:";
        cin>>number2;
        area=0.5*(number2*number1);
        cout<<"Area:"<<area;
}
}
