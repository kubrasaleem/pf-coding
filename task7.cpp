#include<iostream>
#include<cmath>
using namespace std;

void multi(float number1,float number2);

int main(){
    float number1,number2;
cout<<"Enter distance from base of tree:" ;
cin>>number1;
cout<<"Enter angle of elevation :";
cin>>number2;
float radian = number2 / 57.2958;
multi(number1 , radian );
return 0;
}
void multi(float number1,float number2)
{
cout<<"The height of tree: " <<
number1*tan(number2);

}