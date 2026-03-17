#include<iostream>
using namespace std;
main (){
    int number;
    int digit;
    int frequency=0;
cout<<"Enter number:";
cin>>number;
cout<<"Enter digit:";
cin>>digit;
for(number;number>0 ;number/=10)
{  int  lastdigit=number%10;
if(lastdigit==digit)
{
    frequency++;
}
}
cout<<"Frequency="<<frequency;
return 0;


}