#include<iostream>
using namespace std;
main(){
cout<<"Enter the student's name";
string name;
cin>>name;
cout<<"Enter matric number(out of 1100)";
int number1;
cin>>number1;
cout<<"Enter intermediate number(out of 555)";
int number2;
cin>>number2;
cout<<"Enter ecadt marks(out of 400)";
int number3;
cin>>number3;
float aggregate_scores =(number1*0.10/1100)+(number2*0.40/555)+(number3*0.50/400);
cout<<"agggregate scores for"<<name <<"is "<<aggregate_scores<<"%";



}