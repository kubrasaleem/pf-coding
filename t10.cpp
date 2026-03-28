#include<iostream>
using namespace std;
main(){
char word[100];
cout<<"Enter a string:";
cin>>word;
for(int i=0;word[i]!='\0';i++){
    char letter=word[i];
    if(letter>='a'&& letter<'z'){
        word[i]=letter+1;
    }
    else if (letter=='z'){
        word[i]='a';
    }
    else if(letter>='A'&& letter<'Z'){
        word[i]=letter+1;
    }
    else if(letter=='Z'){
        word[i]='A';
    }
}
cout<<"Shifted string:"<<word<<endl;

}