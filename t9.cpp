#include<iostream>
using namespace std;
main(){
char word[100];
cout<<"Enter a string:";
cin>>word;
cout<<"Reversed string:";
int length=0;
while(word[length]!='\0'){
    length++;
}
for(int j=length-1;j>=0;j--)
    {
     cout<<word[j];
}
cout<<endl;
}