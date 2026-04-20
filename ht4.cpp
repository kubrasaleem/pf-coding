#include<iostream>
using namespace std;   
float taxcaculculator(char type,float price){
float taxrate=0;
if(type=='M' || type=='m'){
taxrate=6;
}
if(type=='E' || type=='e'){
taxrate=8;
}
else if(type=='S' || type=='s'){
taxrate=10;
}
else if(type=='V' || type=='v'){
taxrate=12;
}
else if(type=='T' || type=='t'){
taxrate=15;
}
else{
    cout<<"Invalid vehicle code type!";
}
float taxamount=price*taxrate/100;
float finalprice=price+taxamount;
return finalprice;
}
int main(){
    char type;
    float price;
    cout<<"Enter vehicle type(M/E/S/V/T):";
    cin>>type;
    cout<<"Enter price  of vehicle:";
    cin>>price;
    float finalprice=taxcaculculator( type, price);
    cout<<"The final price of vehicle in $ is "<< finalprice <<endl;
    return 0;

}