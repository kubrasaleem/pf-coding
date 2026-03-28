#include<iostream>
using namespace std;
main (){
string input,result="something";
cout<<"Enter the argument:";
cin>>input;
for(int i=0;i<input.length() ; i++){
    result+=input[i];
}
cout<< "Result : "<< result <<endl;

}