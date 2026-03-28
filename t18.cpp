#include<iostream>
using namespace std;
main (){
    string str,result=" ";
    cout<<"Enter a string:";
    cin >>str;
    for(int i=0; i<str.length()   ; i++){
        char ch=str[i];
        if(ch!='a' && ch!='e' && ch!= 'i' && ch!='o'   && ch!= 'u' &&
         ch!='A' && ch!='E' && ch!= 'I' && ch!='O'   && ch!= 'U' ) {
            result+= ch;
         }                                                           
    }
    cout<<"After removing vowels: "<< result <<endl;
    }