#include<iostream>
using namespace std;
string checkalphabetcase(char ch)
{
if(ch =='A'){
    cout<<"You have entered capital A.";
    }
 else if(ch =='a')   
    {
    cout<<"You have entered small a.";
}
else {
    cout<<"You enetred another alphabet.";
}
}
int main(){
char ch;
cout<<"Enter a character:";
cin>>ch;
checkalphabetcase(ch);
return 0;

}