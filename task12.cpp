#include<iostream>
using namespace std;
string oddOReven(int num){
    int digit1=num/10000;
    int digit2=num/1000%10;
    int digit3=num/100%10;
    int digit4=num/10%10;
    int digit5=num%10;
    int sum=digit1+digit2+digit3+digit4+digit5;
    if(sum%2 == 1){
        return "odd";
    }
    else{
        return"Even";
    }
}
int main(){
    cout<<"Enter a number:";
    int num;
    cin>>num;
   string result= oddOReven(num);
   cout<<result;
    return 0;
}