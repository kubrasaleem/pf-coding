#include<iostream>
using namespace std;
main(){
char word[100];
cout<<"Enter a word:";
cin>>word;
for(int i=0;word[i]!='\0';i++){
    char letter=word[i];
    if(letter>='a'&& letter<='z')
    {
     cout<<letter<<" found at position "<<i<<endl;
}
}
}