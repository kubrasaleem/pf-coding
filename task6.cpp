#include<iostream>
using namespace std;
main(){
    char going;
    cout<<"Are you freinds going?(Press y for yes N for no)";
    cin>>going;
    if (going=='y'){
        cout<<"You are also going!";
    }
    if (going=='n'){
        cout<<"You are not going!";
    }

}