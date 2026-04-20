#include<iostream>
using namespace std;
 bool issymmetrical(int n){
    int digit1=n/100;
    int digit2=n/10%10;
    int digit3=n%10;
    if(digit1==digit3){
        return true;
    }
    else{ 
        return false;
    }
 }
 int main(){
    cout<<"Enter three digits number.";
    int n;
    cin>>n;
    if(issymmetrical(n)==true){
        cout<<"The number is symmetrical.";
    }
    else{
        cout<<"The number is not symmetrical.";
    }
    return 0;
 }