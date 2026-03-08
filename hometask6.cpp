#include<iostream>
using namespace std;
int main(){
    int speed;
    cout<<"Speed:";
    cin>>speed;
    if(speed<10){
    cout<<"Slow";
}
 else if(speed<=50){
    cout<<"Average";

}
else if(speed<=150){
    cout<<"Fast";

}
else if(speed<=1000){
cout<<"Ultrafast";
}

else if(speed>1000){
    cout<<"Extremely fast";
}
return 0;
}