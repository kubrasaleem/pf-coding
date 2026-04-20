#include<iostream>
using namespace std;
int x=10;
void myfunction(){
     cout<<"The value of x is "<< x<<endl; 
    int x=20;
}
main(){
    myfunction();
    int x=30;
    cout<<"The value of x is "<< x<<endl;
    myfunction();
}