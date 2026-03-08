#include<iostream>
using namespace std;
main(){
int salary=10000;
int  savedpermonth=(salary*50/100);
int laptopprice=50000;
int monthsrequired=laptopprice/savedpermonth;
int advance=savedpermonth*6;
if(advance>=laptopprice){
    cout<<"Ali can buy laptop";
}
if (advance<laptopprice){
    cout<<"Months requird to buy laptop:"<<monthsrequired;

}









}