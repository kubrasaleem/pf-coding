#include<iostream>
using namespace std;
main(){
int a;
cout<<"Enter first number:";
cin>>a;
int b;
cout<<"Enter second number:";
cin>>b;
int gcd=1;
for( int i=1;i<=(a<b?a:b);i++)
{if(a%i==0&&b%i==0)
    gcd=i;
}
int lcm=(a*b)/gcd;
cout<<"GCD:"<<gcd<<endl;
cout<<"LCM:"<<lcm<<endl;
}