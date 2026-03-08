#include<iostream>
using namespace std;
main(){
int t1;
cout<<"Enter temperature city 1:";
cin>>t1;
int t2;
cout<<"Enter temperature city 2:";
cin>>t2;
if(t1-t2>10){
    cout<<"Difference is too big."<<endl;
}
else{
    cout<<"Program ends";
}

}