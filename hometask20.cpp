#include<iostream>
using namespace std;
int main(){
while(true){
int choice;
string name;
cout<<"----Library System----"<<endl;
cout<<"1.Add Book"<<endl;
cout<<"2.View Book"<<endl;
cout<<"3.Borrow Book"<<endl;
cout<<"4.Issue Book"<<endl;
cout<<"5.Exit"<<endl;
cout<<"Enter your choice(1-5):";
cin>>choice;
if(choice==1){
    cout<<"Enter book name:";
    cin>>name;
    cout<<"You added a book:"<<name<<endl;
}
else if (choice==2){
    cout<<"Enter book name:";
    cin>>name;
    cout<<"You viewed a book:"<<name<<endl;
    }
    else if(choice==3){
    cout<<"Enter book name:";
    cin>>name;
    cout<<"You borrowed a book:"<<name<<endl;
}
else if(choice==4){
    cout<<"Enter book name:";
    cin>>name;
    cout<<"You issued a book:"<<name<<endl;
}
else if(choice==5){
    cout<<"Existing a Library System.Goodbye!:"<<name<<endl;
}
else {
    cout<<"Invalid choice.";
}
}
}