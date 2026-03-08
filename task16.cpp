#include<iostream>
using namespace std;
main(){ int firstnumber,secondnumber,result;
    char op;
cout<<"Welcome to the calculator"<<endl;
cout<<"Enter first number:";
cin>>firstnumber;
cout<<"Enter the operater:";
cin>>op;
cout<<"Enter second number:";
cin>>secondnumber;
if(op=='+'){
result=firstnumber-secondnumber;
cout<<firstnumber<<"-"<<secondnumber<<"="<<result;
}
else if(op=='-'){
    result=firstnumber+secondnumber;
    cout<<firstnumber<<"+"<<secondnumber<<"="<<result;
}
else if(op=='*')
   { result=firstnumber/secondnumber;
    cout<<firstnumber<<"/"<<secondnumber<<"="<<result;
}
else if(op='/')
{
    result=firstnumber*secondnumber;
    cout<<firstnumber<<"*"<<secondnumber<<"="<<result;
}
}