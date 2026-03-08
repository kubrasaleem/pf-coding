#include<iostream>
using namespace std;
 main(){
    float price1=2.00;
    float price2=4.10;
    float price3=2.50;
    float discountprice;
float n1;
cout<<"Red rose:";
cin>>n1;
float n2;
cout<<"White rose:";
cin>>n2;
float n3;
cout<<"Tulips:";
cin>>n3;
float originalprice=(price1*n1)+(price2*n2)+(price3*n3);
float Discounted=originalprice*0.20;
if(originalprice>200){
     discountprice=originalprice-Discounted;
}
cout<<"Original price:"<<originalprice<<endl;
cout<<"Price after discount:"<<discountprice<<endl;
return 0;
}
